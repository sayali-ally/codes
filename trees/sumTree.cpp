int sum(struct Node*root)
{
    if(root==NULL)
    return 0;
    return sum(root->left)+sum(root->right)+root->data;
}
bool isSumTree(Node* root)
{
     int l,r;
     if(root==NULL ||root->left==NULL && root->right==NULL )
     return true;
     l=sum(root->left);
     r=sum(root->right);
     if(root->data==l+r &&isSumTree(root->left)&&isSumTree(root->right))
     return true;
     
}