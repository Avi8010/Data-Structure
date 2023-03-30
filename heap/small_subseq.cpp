#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
            cin>>a[i];
    }
    priority_queue<pair<int,int>,vector<pair<int,int>> > q;
    for(int i=0;i<n;i++){
        q.push({a[i],i});
    }
    int sum=0;
    int cnt=0;
    vector<pair<int,int>> p;
    while(!q.empty()){
        pair<int,int> x=q.top();
        sum+=x.first;
        q.pop();cnt++;
        p.push_back(make_pair(x.first,x.second));
        if(sum>=k){
            break;
        }
    }
    if(sum<k){
        cout<<"-1"<<endl;
    }
    else{
        cout<<cnt<<endl;
        for(int i=0;i<p.size();i++){
            cout<<"("<<p[i].first<<","<<p[i].second<<")"<<" ";
        }
    }
    return 0;
}