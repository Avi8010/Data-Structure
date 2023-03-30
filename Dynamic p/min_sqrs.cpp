#include <bits/stdc++.h>
using namespace std;
const int N=1e5+2,mod=1e9+7;
int dp[N];
/*
int minsq(int n){
    if(n==0 || n==1 || n==2 || n==3){
        return n;
    }
    if(dp[n]!=mod){
        return dp[n];
    }
    // int ans = mod;
    // for(int i=1;i<=sqrt(n);i++){
    //     ans = min(ans , 1 + minsq(n-i*i));
    // }
    // return ans;
    for(int i=1;i<=sqrt(n);i++){
        dp[n]=min(dp[n],1+minsq(n-i*i));
    }
    return dp[n];
} 
int main(){
    for(int i=0;i<N;i++){
        dp[i]=mod;
    }
    int n;cin>>n;
    cout<<minsq(n)<<endl;
    return 0;
}
*/
int main(){
    int n;cin>>n;
    vector<int> dp(n+1,mod);
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    dp[3]=3;
    for(int i=1;i*i <=n;i++){
        for(int j=0;i*i + j <=n;j++){
            dp[i*i + j]=min(dp[i*i +j] , 1 + dp[j]);
        }
    }
    cout<<dp[n];
}