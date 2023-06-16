class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
   int height(struct Node* node){
    if(node==NULL)
    return 0;
    int lh=height(node->left);
    int rh=height(node->right);
    if(lh>rh)
    return lh+1;
    else return rh+1;
}
    int diameter(Node* root) {
        if(root==NULL)
        return 0;
        
        int lh=height(root->left);
        int rh=height(root->right);
        
        return max((lh+rh+1),max(diameter(root->left),diameter(root->right)));
    }
};

