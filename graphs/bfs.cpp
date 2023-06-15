class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
  
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    queue<int>q;
    vector<int>vis(V);
    vector<int>ans;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int a=q.front();
            ans.push_back(a);
            q.pop();
            for(auto i:adj[a]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=1;
                }
            }
            
        }
        return ans;
    }
};