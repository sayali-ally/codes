
bool sumSubtreeUtil(struct Node*root, int &curr, int &sum){
    if(root==NULL){
        curr=0;
        return false;
    }

    int left=0,right=0;
    return (sumSubtreeUtil(root->left,left,sum) || sumSubtreeUtil(root->right,right,sum)
     || ((curr=  left+ right + root->data))==sum);
}

bool sumSubtree(struct Node *root, int sum){
    int curr=0;
    return sumSubtreeUtil(root,curr,sum);
}