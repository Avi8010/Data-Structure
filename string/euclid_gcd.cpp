#include <bits/stdc++.h>
using namespace std;
int euclid_gcd(int a,int b){
    int gcd;
    while(b>0){
        gcd=a%b;
        a=b;
        b=gcd;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<euclid_gcd(a,b);
    return 0;
}