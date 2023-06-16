vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>>res;
    if(root==NULL)
    return res;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        while(n--){
            vector<int>ans;
            Node*temp=q.front();
            q.pop();
            ans.push_back(temp->data);
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
        }
        res.push_back(ans);
    }

    for(int i=0;i<res.size();i++){
        if(i%2!=0){
            reverse(res[i].begin(),res[i].end());
        }
    }
    return res;
}