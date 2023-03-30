#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int> > q;
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    priority_queue<int,vector<int>,greater<int> > p;
    p.push(5);
    p.push(6);
    p.push(2);
    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<endl;
    return 0;
}