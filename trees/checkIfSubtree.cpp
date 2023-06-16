class Solution
{
  public:
    //Function to check if S is a subtree of tree T.
    bool isIdentical(Node*a,Node*b){
        if(a==NULL && b==NULL)
        return true;
        if(a==NULL || b==NULL)
        return false;
        
        return (a->data == b->data && isIdentical(a->left,b->left) && isIdentical(a->right,b->right));
    }
    bool isSubTree(Node* T, Node* S) 
    {
        if(S==NULL)
        return 1;
        if(T==NULL)
        return 0;
        
        if(isIdentical(T,S))
        return 1;

        return isSubTree(T->left, S) || isSubTree(T->right, S);
        
    }
};
