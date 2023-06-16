class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)
        return res;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            vector<int>ans;
            while(n--){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left != NULL)
                q.push(temp->left);
                if(temp->right != NULL)
                q.push(temp->right);

                ans.push_back(temp->val);
            }
            res.push_back(ans);
        }
        return res;
    }
};