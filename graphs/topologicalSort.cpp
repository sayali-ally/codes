class Solution
{
	public:
	vector<bool>vis;
	vector<int>ans;
    void dfs(int V,vector<int>adj[]) {
        vis[V]=1;
        for(int i:adj[V]){
            if(!vis[i])
                dfs(i,adj);
        }
        ans.push_back(V);
    }
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vis.resize(V,0);
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,adj);
	        }
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};