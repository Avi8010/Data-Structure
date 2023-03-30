#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int ,int> m;
    int prefsum=0;
    for(int i=0;i<n;i++){
        prefsum+=a[i];
        m[prefsum]++;
    }
    int ans=0;
    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        int c=it->second;
        ans+=(c*(c-1))/2;
        if(it->first==0){
            ans+=c;
        }
    }cout<<endl;
    cout<<ans<<endl;
    return 0;
}