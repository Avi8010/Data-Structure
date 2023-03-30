#include <bits/stdc++.h>
using namespace std;
const int inf=1e3+2;
int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    vector<int> jumps(n,inf);
    if(a[0]==0){
        cout<<" inf";
        return 0;
    }
    jumps[0]=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(i<=(j+a[j])){
            jumps[i]=min(jumps[i],1+jumps[j]);
            }
        }
    }
    cout<<jumps[n-1];
}
