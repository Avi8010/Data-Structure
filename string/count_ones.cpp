#include <bits/stdc++.h>
using namespace std;
int num_of_ones(int n){
    int count=0;
    while(n!=0){
        n=n & (n-1);
        count++;
    }
    return count;
}
int main(){
    cout<<num_of_ones(5);

    return 0;

} 