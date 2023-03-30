#include <bits/stdc++.h>
using namespace std;
bool powerof2(int n){
    return (n && !(n & n-1));
}
int main(){
    cout<<powerof2(5);

    return 0;

} 