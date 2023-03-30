#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int ,int> m;
    int sum=0,ans=INT_MAX;
    
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    ans=min(ans,sum);
    for(int i=k;i<n;i++){
        sum+=(a[i]-a[i-k]);
        ans=min(ans,sum);
    }
    cout<<ans;
    return 0;
}