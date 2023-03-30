#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<char> s;
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
    s.erase(s.find('a'));
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;
    
   cout<<*s.upper_bound('a')<<endl;
   cout<<*s.lower_bound('a')<<endl;
   cout<<*s.upper_bound('d')<<endl;
    return 0;
    

}