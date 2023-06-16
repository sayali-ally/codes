A vertex is an articulation point if removing it disconnects the graph .
using Tarjans Algorithm 

#include<bits/stdc++.h>
using namespace std;

void APutil(int u,vector<int>&adj[],vector<int>&disc,vector<int>&low,int parent,vector<bool>&vis, vector<bool>&isAP,int time){
    int children=0;
    vis[u]=true;
    disc[u]=low[V]=++time;
    for(auto v=adj[u]){
        if(!vis[v]){
            children++;
            APutil(v,adj,disc,low,u,vis,isAP,time);
            low[u]=min(low[u],low[v]);
            if(parent!=-1 && low[v]>=disc[u])
            isAP[u]=true;
        }
        else if(v!=parent){
            low[u]=min(low[u],disc[v]);
        }
    }if(parent==-1 && children>1)
    isAP[u]=true;

}
vector<int>AP(int V, vector<int>adj[]){
    vector<int>disc(V,0);
    vector<bool>vis(V,false);
    vector<int>low(V);
    vector<int>ans;
    int parent=-1;
    int time=0;
    vector<bool>isAP(V,false);

    for(int i=0;i<V;i++){
        if(!vis[i]){
            APutil(i,adj,disc,low,-1,vis,isAP,time);
        }
    }
    return ans;
}