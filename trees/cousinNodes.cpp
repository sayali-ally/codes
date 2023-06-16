bool isSibling(Node*root,int a,int b){
    if(root==NULL)
    return 0;
    return ((root->left->data==a && root->right->data==b) || (root->right->data==b && root->left->data==a) || isSibling(root->left,a,b) 
    || isSibling(root->right,a,b));
}
int level(Node*root,int node,int lev){
    if(root==NULL)
    return 0;
    if(root->data==node)
    return lev;
    int l=level(root->left,node,lev+1);
    if(l!=0)
    return l;
    return level(root->right,node,lev+1);
    
}
bool isCousins(Node *root, int a, int b)
{
   if(level(root,a,1)==level(root,b,1) && !isSibling(root,a,b))
   return true;
   else
   return false;
}