#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    //int count=0;
    /*
    for(int i=0;i<s.length();i++){
    if(s[i]=='a'){
        count++;

    }
    }
    */
   int fre[26];
   for(int i=0;i<26;i++){
       fre[i]=0;
   }
   for(int i=0;i<s.length();i++){
       fre[s[i]-'a']++;
   }
   char ans='a';
   int maxf=0;
   for(int i=0;i<26;i++){
       if(fre[i]>maxf){
           maxf=fre[i];
           ans= i +'a';
       }
   }

    
    cout<<maxf<<ans;
    return 0;
}