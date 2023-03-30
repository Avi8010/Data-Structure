#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0,maxx=0;
    for(int i=0;i<n;i++){
        c+=a[i];
        maxx=max(maxx,c);
        if(c<0){
            c=0;   
        }
    }
    cout<<maxx;
    return 0;
}