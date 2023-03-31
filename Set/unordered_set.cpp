#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<char> s;
    s.insert('a');
    s.insert('b');
    s.insert('c');
    s.insert('a');
    s.insert('d');
    s.insert('b');
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;
    cout<<s.size()<<endl;
    s.erase('a');
    for(auto i: s){ 
        cout<<i<<" ";
    }
    return 0;
}