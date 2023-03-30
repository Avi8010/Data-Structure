#include <bits/stdc++.h>
using namespace std;
bool sort(int a[],int n){
    if(n==1){
        return true;
    } 
    bool resta=sort(a+1,n-1);
    return (a[0]<a[1] && resta);
}
int main(){
    int a[4]={1,2,3,4};
    cout<<sort(a,4);

    return 0;
}