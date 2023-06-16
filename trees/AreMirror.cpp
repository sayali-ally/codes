Mirror tree
bool areMirror(Node* a, Node* b){
    if(a==NULL && b==NULL)
    return true;
    if(a==NULL || b==NULL)
    return false;

    return (a->data==b->data && areMirror(a->left,b->right) && areMirror(a->right,b->left));
}

Symmetric Tree
bool isSymmtetric(Node*root)
{
    return areMirror(root,root);
}

2 Trees are Identical or not 
int identicalTrees(node* a, node* b)
{
    if (a == NULL && b == NULL)
        return 1;
    if (a != NULL && b != NULL) {
        return (a->data == b->data
                && identicalTrees(a->left, b->left)
                && identicalTrees(a->right, b->right));
    }
    return 0;
}
 