#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    //int prefact=factorial(n-1);
    return n* factorial(n-1);
}
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevpower=power(n,p-1);
    return n*prevpower;
}
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=sum(n-1);
    return n+prevsum;
}
int main(){
    int n;
    int p;
    cin>>n>>p;
    cout<<sum(n)<<endl;
    cout<<power(n,p)<<endl;
    cout<<factorial(n)<<endl;
    return 0;
}