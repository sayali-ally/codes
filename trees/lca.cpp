bool findPath(Node* root, vector<int>& path, int k)
{
    if (root == NULL)
        return false;
    path.push_back(root->key);
    if (root->key == k)
        return true;
    if ((root->left && findPath(root->left, path, k))
        || (root->right && findPath(root->right, path, k)))
        return true;
    path.pop_back();
    return false;
}
int findLCA(Node* root, int n1, int n2)
{
    vector<int> path1, path2;
    if (!findPath(root, path1, n1)
        || !findPath(root, path2, n2))
        return -1;

    int i;
    for (i = 0; i < path1.size() && i < path2.size(); i++)
        if (path1[i] != path2[i])
            break;
    return path1[i - 1];
}




struct Node* findLCA(struct Node* root, int n1, int n2)
{
    if (root == NULL)
        return NULL;

    if (root->key == n1 || root->key == n2)
        return root;

    Node* left_lca = findLCA(root->left, n1, n2);
    Node* right_lca = findLCA(root->right, n1, n2);
    if (left_lca && right_lca)
        return root;
        
    return (left_lca != NULL) ? left_lca : right_lca;
}