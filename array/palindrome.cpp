#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool check=false;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-i-1]){
            check=false;
            break;
        }
        
    }
    if(check==true){
        cout<<"palindrome";
    }
    else{
        cout<<"not paindrome";
    }
    return 0;
}