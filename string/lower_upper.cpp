#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s= "ahkdkskjslaaddl";
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<<s;
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<<s;
    //cout<<'a'-'A'<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')
        s[i]-=32;
    }
    cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')
        s[i]+=32;
    }
    cout<<s<<endl;


    return 0;

}