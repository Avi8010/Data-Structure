#include <bits/stdc++.h>
#include <climits>
using namespace std;
int kadane(int arr[], int n){
    int csum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        csum+=arr[i];
        if(csum<0){
            csum=0;
        }
        maxsum=max(maxsum,csum);
    }


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    int wrapsum;
    int nonwrap;
    nonwrap=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        
        totalsum+=arr[i];  
        arr[i]=-arr[i];
    }
    wrapsum = totalsum + kadane(arr,n);
    cout<<max(wrapsum,nonwrap)<<endl;
    return 0;
}