#include <bits/stdc++.h>
const int N=1e5+3 , mod=1e9+7;
int dp[N];
using namespace std;
// int fib(int n){
//     if(n==0)
//         return 0;
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     if(dp[n-1]!=-1)
//         return dp[n];  
//     dp[n] = fib(n-1)+fib(n-2); 

//     return dp[n];
// }
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        dp[i]=-1;
    }
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];

}