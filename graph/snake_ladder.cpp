#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,s;
    cin>>l;
    map<int,int> lad;
    map<int,int> snk;
    for(int i=0;i<l;i++){
        int u,v;cin>>u>>v;
        lad[u]=v;
    }
    cin>>s;
    for(int i=0;i<s;i++){
        int u,v;cin>>u>>v;
        snk[u]=v;
    }
    int moves=0;
    queue<int> q;
    q.push(1);
    bool found=false;
    vector<int> vis(101,0);
    vis[1]=true;
    while(!q.empty() && !found){
        int sz=q.size();
        while(sz--){
            int t=q.front();
            q.pop();
            for(int die=1;die<=6;die++){
                if(t+die == 100){
                    found=true;
                }
                if(t+die<=100 && lad[t+die] && !vis[lad[t+die]]){
                    vis[lad[t+die]]=true;
                    if(lad[t+die]==100){
                        found=true;
                    }
                    q.push(lad[t+die]);
                }
                else if(t+die<=100 && snk[t+die] && !vis[snk[t+die]]){
                    vis[snk[t+die]]=true;
                    if(snk[t+die]==100){
                        found=true;
                    }
                    q.push(snk[t+die]);
                }
                else if(t+die<=100  && !vis[t+die] && !snk[t+die] && !lad[t+die]){
                    vis[snk[t+die]]=true;
                    q.push(t+die);
                }
            }
        }
        moves++;
    }
    if(found){
        cout<<moves;
    }
    else{
        cout<<"-1";
    }
    return 0;
}