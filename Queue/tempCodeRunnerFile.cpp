#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int> a(n);
    for(auto i: a){
        cin>>i;
    }
    bool found = false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){