class Solution{
  public:
    // function should return level of the target node
    int getLevelUtil(struct Node*root, int target, int lev){
        if(root==NULL)
        return 0;
        if(root->data==target)
        return lev;
        
        int l=getLevelUtil(root->left,target,lev+1);
        if(l!=0)
        return l;
        
        l=getLevelUtil(root->right,target,lev+1);
        return l;
    }
    int getLevel(struct Node *node, int target)
    {
    	return getLevelUtil(node,target,1);
    }
};