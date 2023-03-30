#include <bits/stdc++.h>
using namespace std;
int path(int s,int e){
    int count=0;
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    for(int i=1;i<=6;i++){
        count+=path(s+i,e);
    }
    return count;
}
int main(){
    cout<<path(0,3);
    return 0;
}