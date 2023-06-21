Node* sortedArrayToBST(int arr[], int start, int end){
    if(start > end)
    return NULL;

    int mid = (s+e)/2;
    Node* root = newNode(arr[mid]);
    root->left = sortedArrayToBST(arr,s,m-1);
    root->right = sortedArrayToBST(arr,m+1,e);
    return root;
}