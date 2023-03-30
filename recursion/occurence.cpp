#include <bits/stdc++.h>
using namespace std;
int foccur(int a[], int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return foccur(a,n,i+1,key);
}
int loccur(int a[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int resta=loccur(a,n,i+1,key);
    if(resta!=-1){
        return resta;
    }
    if(a[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int a[]={1,2,3,4,1,2,3,4};
   
    cout<<loccur(a,8,0,2)<<endl;
    cout<<foccur(a,8,0,2)<<endl;

    return 0;
}