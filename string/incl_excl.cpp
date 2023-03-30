#include <bits/stdc++.h>
using namespace std;
int divisible(int n,int a,int b){
   int cnta=n/a,cntb=n/b,cntab=n/(a*b);

    return ((cnta+cntb)-cntab);
}
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b);
    return 0;
}