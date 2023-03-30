#include <bits/stdc++.h>
using namespace std;
string deletion(string s,int r){
    for(int i=0;i<r;i--){
                if(s[i]=='0' && s[i+2]=='0'){
                    s.erase(s[i],s[i]);
                    s.erase(s[i+2],s[i+2]);
                }
    }
    return s;
}

int main(){
    string s;
    cin>>s;
    int r=s.length();
    string t="";
    string w="";
    for(int i=0;i<r;i++){
            if(s[i]=='0'){
                t+=s[i];
            }
            else{
                w+=s[i];
            }
        }
    if(r<=3){
        cout<<s<<endl;
    }
    else if(r>3){
        if(w.length()==s.length()){
        cout<<w.substr(0,r-2)<<endl;
        }
        else if(t.length()==s.length()){
        cout<<t<<endl;
        cout<<s<<endl;
        }
        else{
           cout<<deletion(s,r);
        }
    }
    return 0;
}