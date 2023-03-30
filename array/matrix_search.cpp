#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int key;
    cin>>n>>m;
    cin>>key;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int r=0,c=m-1;
    bool found;
    while(r<n && c>=0){
        if(a[r][c]==key){
            found=true;
        }
        if(a[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }
        if(found){
            cout<<"key exists";
        }
        else{
            cout<<"key not exists";
        }
    
    return 0;

}