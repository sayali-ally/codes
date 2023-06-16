class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int V,vector<int>adj[],vector<int>&vis,vector<int>&path){
        vis[V]=1;
        path[V]=1;
        
        for(auto i: adj[V]){
            if(!vis[i]){
                if(dfs(i,adj,vis,path)==true)
                return true;
            }
            else if(vis[i]==1 && path[i]==1)
            return true;
        }
            path[V]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        vector<int>path(V,0);

        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,path)==true)
                return true;
            }
        }
    
        return false;
    }
};
