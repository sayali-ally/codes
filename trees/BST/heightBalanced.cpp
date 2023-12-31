int height(Node* node)
{
    // base case tree is empty
    if (node == NULL)
        return 0;
 
    // If tree is not empty then
    // height = 1 + max of left height
    // and right heights
    return 1 + max(height(node->left), height(node->right));
}
 
// Returns true if binary tree
// with root as root is height-balanced
bool isBalanced(Node* root)
{
    // for height of left subtree
    int lh;
 
    // for height of right subtree
    int rh;
 
    // If tree is empty then return true
    if (root == NULL)
        return 1;
 
    // Get the height of left and right sub trees
    lh = height(root->left);
    rh = height(root->right);
 
    if (abs(lh - rh) <= 1 && isBalanced(root->left)
        && isBalanced(root->right))
        return 1;
 
    // If we reach here then tree is not height-balanced
    return 0;
}