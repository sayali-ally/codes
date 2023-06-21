bool iterativeSearch(struct Node* root, int key)
{
    while(root!=NULL){
        if(key>root->data)
        root=root->right;

        else if(key<root->data)
        root=root->left;

        else
        return 1;
    }
    return false;
    
}
