#include <bits/stdtr1c++.h>
using namespace std;
void rec(int n,vector<int> &a){
    int s=0;
    set<int> st;
    vector<int> v;
    if(v.size()==n){
        cout<< n;
    }
    for(int i=0;i<n;i++){
        v[i]=a[i];
        if(a[i]!=a[i-1]){
            st.insert(s);
            s=0;
        }
        if(a[i]==a[i-1]){
            s+=a[i];
        } 
    }
    cout<<rec(v.size(),v);
    
}
int main(){
    int n;cin>>n;
    vector<int> a;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size()==n){
        cout<<n<<endl;  
    }
    else{
        rec(n,a);
    }
    return 0;
}
