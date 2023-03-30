#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int clength=0;
    int maxlength=0;
    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(clength>maxlength){
                maxlength=clength;

            }
            clength=0;
        }
        else
        clength++;
        if(arr[i]=='\0'){
            break;  
            i++;
        }
        

    }
    cout<<maxlength;

return 0;
}