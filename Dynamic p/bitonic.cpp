#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    vector<int> a={1,11,2,10,4,5,2,1};
    vector<int> forw(n,1);
    vector<int> back(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                forw[i]=max(forw[i],1+forw[j]);
            }
        }
    }

    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(a[i]>a[j]){
                back[i]=max(back[i],1+back[j]);
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        
                ans=max(ans,back[i]+forw[i]-1);
            
    }
    cout<<ans;
    return 0;
}