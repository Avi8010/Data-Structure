#include <bits/stdc++.h>
using namespace std;
int knapsack(int vl[],int wt[],int n,int w){
    if(n==0 || w==0){
        return 0;
    } 
    if(wt[n-1]>w){
        return knapsack(vl,wt,n-1,w);
    }
    return max((knapsack(vl,wt,n-1,w-wt[n-1])+vl[n-1]),knapsack(vl,wt,n-1,w));


}
int main(){
    int wt[]={10,20,30};
    int vl[]={100,50,150};
    int w=80;
    cout<<knapsack(vl,wt,3,w);

    return 0;
}