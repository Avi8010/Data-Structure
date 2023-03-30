#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int>color;
vector<bool> vis;
bool bipart;
void colors(int u,int curr){
    if(color[u] != -1 && color[u]!=curr){
        bipart=false;
        return;
    }
    color[u]=curr;
    if(vis[u])
        return;
    vis[u]=true;
    for(auto i: adj[u]){
        colors(i,curr xor 1);
    }
}
int main(){
    int n,m;cin>>n>>m;
    adj=vector<vector<int>>(n);
    color=vector<int> (n,-1);
    vis=vector<bool> (n,false);
    bipart=true;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            colors(i,0);
        }
    }
    if(bipart){
        cout<<" yes ";
    }
    else{
        cout<<"no";
    }

    return 0;
}