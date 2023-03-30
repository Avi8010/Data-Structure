#include <bits/stdc++.h>
using namespace std;
const int k=1e5+2;
bool vis[k];
vector<int> adj[k];
void dfs(int node){
    vis[node]=1;
    vector<int> :: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(vis[*it]);
        else{
            dfs(*it);
        }
    }
    cout<<node<<" ";
}
int main(){
    int n,m;
    cin>>n>>m;
    int x,y;
    for(int i=0;i<n;i++){
        vis[k]=false;
    }
    for(int i=0;i<n;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    return 0;
}