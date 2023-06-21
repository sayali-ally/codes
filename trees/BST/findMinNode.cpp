void inorder(struct node* node, vector<int>& sortedInorder)
{
    if (node == NULL)
        return;
    inorder(node->left, sortedInorder);
    sortedInorder.push_back(node->data);
    inorder(node->right, sortedInorder);
}