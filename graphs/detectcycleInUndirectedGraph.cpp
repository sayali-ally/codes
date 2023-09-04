class Solution {
  public:
    bool dfs(int V,vector<int>adj[],int parent,vector<int>&vis){
        vis[V]=1;
        for(auto i: adj[V]){
            if(!vis[i]){
                if(dfs(i,adj,V,vis))
                return true;
            }
            else if(i!=parent)
            return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,-1,vis))
                return true;
            }
        }
        return false;
    }
};


