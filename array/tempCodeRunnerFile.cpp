#include <bits/stdtr1c++.h>
using namespace std;
int rec(int n,vector<int> &a){
    
    int s=0;
    set<int> st;
    vector<int> v;
    if(st.size()==n){
        return n;
    }
    for(int i=1;i<n;i++){
        v[i]=a[i];