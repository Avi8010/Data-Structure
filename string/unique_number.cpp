#include <bits/stdc++.h>
using namespace std;
void minimum(int n,int x, int y,int arr[]){
    int a;
    while(a<=y){
    int mini;
    for(int i=0;i<n;i++){
       mini=min(mini,min(arr[i],arr[i+1]));
    }
    mini=mini^x;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<(n);i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}


int main(){
    //int arr[7]={1,2,4,2,1,3,4};
    //cout<<unique(arr,7);
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    minimum(n,x,y,arr);
    
    return 0;
}

