#include <bits/stdc++.h>
using namespace std;
void tower(int n,char src,char dest, char hlp){
    if(n==0){
        return;
    }
    tower(n-1,src,hlp,dest);
    cout<<" move from "<<src<<" to "<<dest<<endl;
    tower(n-1,hlp,dest,src);
}
int main(){
    tower(3,'a','c','b');
    return 0;
}