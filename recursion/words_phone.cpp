#include <bits/stdc++.h>
using namespace std;
string keypad[]={"","","abc","def","ghi","jkl","mno"};
void phone(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code = keypad[ch-'0'];
    string rest=s.substr(1);
    for(int i=0;i<code.length();i++){
        phone(rest,ans+code[i]);
    }
}
int main(){
    phone("23","");
    return 0;
}
