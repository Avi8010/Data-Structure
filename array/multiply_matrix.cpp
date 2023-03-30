#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l;
    cin>>n>>m>>l;
    int a[n][m];
    int b[m][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin>>b[i][j];
        }
    }
    int ans[n][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            ans[i][j]=0;
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){
                ans[i][j]+=a[i][k]*b[k][j];

            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }

return 0;
}