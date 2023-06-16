An edge in an undirected connected graph is a bridge if removing it disconnects the graph.
 For a disconnected undirected graph, the definition is similar, 
 a bridge is an edge removal that increases the number of disconnected components. 

class Solution {
public:
    void dfs(int u,vector<bool>&vis,vector<int>&low,vector<int>&disc,int &timer,vector<vector<int>>&adj,vector<vector<int>>&res,int &parent){


            vis[u]=true;
            disc[u]=low[u]=timer++;
            for(auto v:adj[u]){
                if(v==parent)
                    continue;
                if(!vis[v]){
                    dfs(v,vis,low,disc,timer,adj,res,u);
                    low[u]=min(low[u],low[v]);

                    if(low[v]>disc[u]){
                        vector<int>ans;
                        ans.push_back(u);
                        ans.push_back(v);
                        res.push_back(ans);
                    }
                }
                else{
                    low[u]=min(low[u],disc[v]);
                }
            }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& con) {
        vector<vector<int>>adj(n);
        for(int i=0;i<con.size();i++){
            int u=con[i][0];
            int v=con[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int timer=0;
        int parent= -1;
        vector<bool>vis(n,0);
        vector<int>disc(n,-1);
        vector<int>low(n,-1);
        vector<vector<int>>res;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,low,disc,timer,adj,res,parent);
            }
        }
        return res;
    }
};