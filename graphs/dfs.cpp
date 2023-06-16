class Solution {
  public:
  vector<bool>vis;
  vector<int>ans;
  
  void dfs(int V, vector<int>adj[]){
     
      vis[V]=1;
       ans.push_back(V);
      for(int i:adj[V]){
          if(!vis[i]){
              dfs(i,adj);
          }
      }
  }
  vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      
      for(int i=0;i<V;i++){
          if(!vis[i]){
              dfs(i,adj);
          }
      }
      return ans;
  }
};