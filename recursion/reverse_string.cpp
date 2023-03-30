#include <bits/stdc++.h>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }
    string ss = s.substr(1);
    reverse(ss);
    cout<<s[0];
}
int main(){
    string s="markra";
    reverse(s);
    return 0;
}