#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int key;cin>>key;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    
    bool found = false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int low=i+1;
        int high=n-1;
        while(low<high){
            int cur = a[i] + a[low] + a[high];
            if(cur == key){
                found=true;
            }
            if(cur < key){
                low++;
            }  
            else{
                high--;
            }
        }
    }
    if(found){
         cout<<"found";
    }
    else{
        cout<<"no";
    }
}
