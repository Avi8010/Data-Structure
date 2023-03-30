#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
int rst=0,ren=n-1,cst=0,cen=m-1;
while(rst<=ren && cst<=cen){
    for(int col=cst;col<=cen;col++){
        cout<<a[rst][col]<<" ";
    }
    rst++;
    for(int row=rst;row<=ren;row++){
        cout<<a[row][cen]<<" ";
    }
    cen--;
    for(int col=cen;col>=cst;col--){
        cout<<a[ren][col]<<" ";
    }
    ren--;
    for(int row=ren;row>=rst;row--){
        cout<<a[row][cst]<<" ";
    }
    cst++;
    
}
return 0;
}