class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBSTutil(Node*root,int min,int max){
        if(root==NULL)return true;
        if(root->data<min || root->data>max)return false;
        return isBSTutil(root->left,min,root->data-1) && isBSTutil(root->right,root->data+1,max); 
        
    }
    bool isBST(Node* root) 
    {
        return isBSTutil(root,INT_MIN,INT_MAX);
    }
};
