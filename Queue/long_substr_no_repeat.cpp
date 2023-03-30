#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> dict(256,-1);
    string t;
    int maxlen=0,start=-1;
    for(int i=0;i<s.length();i++){
        if(dict[s[i]]>start){
            start = dict[s[i]];
            // t+=s[i];
        }
            dict[s[i]]=i; 
            maxlen = max(maxlen,i-start);
            //t=s.substr(start,i);     
    }
    cout<<maxlen<<t;
    return 0;
}