#include <bits/stdc++.h>
using namespace std;
int main(){  
    int k;
    cin>>k;
    vector<vector<int> > a(k);
    for(int i=0;i<k;i++){
        int size;
        cin>>size;
        a[i]=vector<int> (size);
        for(int j=0;j<size;j++){
            cin>>a[i][j];
        }
    }
    vector<int> ind(k,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > q;
    for(int i=0;i<k;i++){
        q.push({a[i][0],i});
    }
    vector<int> ans;
    while(!q.empty()){
        pair<int,int> x=q.top();
        q.pop();
        ans.push_back(x.first);
        if(ind[x.second]+1 < a[x.second].size()){
            q.push({a[x.second][ind[x.second]+1],x.second});
        }
            ind[x.second]+=1;
        
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
   
    return 0;
}