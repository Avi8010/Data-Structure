
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int c1=a,c2=a,cnt=a,t;
        while(b>0 || c>0 || d>0){
            if(b>0 && c2>0){
                t=min(b,c2);
                c1+=t;c2-=t;b-=t;cnt+=t;
            }
            else if(c>0 && c1>0){
                t=min(c,c1);
                c1-=t;c2+=t;c-=t;cnt+=t;
            }
            else if(c1>0 && c2>0 && d>0){
                t=min(d,min(c1,c2));
                c1-=t;c2-=t;d-=t;cnt+=t;
            }
            else {
                if(b!=0 || c!=0 || d!=0) cnt++;
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}