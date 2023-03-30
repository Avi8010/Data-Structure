#include <bits/stdc++.h>
using namespace std;
bool iscycle(int src,vector<vector<int>> &adj,vector<bool> &visited,vector<int> &st){
    st[src]=true;
    if(!visited[src]){
        visited[src]=true;
        for(auto i: adj[src]){
            if(!visited[i] && iscycle(i,adj,visited,st)){
                return true;
            }
            if(st[i]){
                return true;
            }
        }
    }
    st[src]=false;
    return false;
}
int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    bool cycle=false;
    vector<int> st(n,0);
    vector<bool> visited(n,0);
    for(int i=0;i<n;i++){
        if(!visited[i] && iscycle(i,adj,visited,st)){
            cycle = true;
        }
    }
    if(cycle)
        cout<<"yes";
    
    else
        cout<<"no";
    
    return 0;
}