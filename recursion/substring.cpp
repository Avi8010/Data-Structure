#include <bits/stdc++.h>
using namespace std;
void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code = ch;
    string rest=s.substr(1);
    substring(rest,ans);
    substring(rest,ch+ans);
    substring(rest,ans+to_string(code));
}
/*
/oid substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string rest=s.substr(1);
    substring(rest,ans);
    substring(rest,ch+ans);
}
*/


int main(){
    substring("ABC","");
    cout<<endl;
    return 0;
}