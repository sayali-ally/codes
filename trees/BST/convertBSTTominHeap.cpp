void modifyBST(Node*root){
    int sum=0;
    modifyBSTUtil(root,0);
}

void modifyBSTUtil(Node*root,int sum){
    if(root==NULL)
    return;

    modifyBSTUtil(root->right,sum);
    sum+=root->data;
    root->data=sum;


    modifyBSTUtil(root->left,sum);

}