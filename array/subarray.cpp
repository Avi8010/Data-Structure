#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int a[n];
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
         cin>>a[i];
    } 
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
    return 0;
}
