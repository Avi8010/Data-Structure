#include <bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int> > mini;
priority_queue<int,vector<int> > maxx;
void insert(int x){
    if(mini.size()==maxx.size()){
        if(maxx.size()==0){
            maxx.push(x);
            return;
        }
        if(x<maxx.top()){
            maxx.push(x);
        }
        else{
            mini.push(x);
        }
    }
    else{
        if(maxx.size()>mini.size()){
            if(x>=maxx.top()){
                mini.push(x);
            }
            else{
                int temp=maxx.top();
                maxx.pop();
                mini.push(temp);
                maxx.push(x);
            }
        }
        else{
            if(x<=mini.top()){
                maxx.push(x);
            }
            else{
                int temp=mini.top();
                mini.pop();
                maxx.push(temp);
                mini.push(x);
            }
        }
    }
}
double median(){
    if(maxx.size()==mini.size()){
        return (mini.top()+maxx.top())/2.0;
    }
    else if(maxx.size()>mini.size()){
            return maxx.top();
    }
    else{
        return mini.top();
    }

}
int main(){
    insert(10);
    cout<<median()<<endl;
    insert(15);
    cout<<median()<<endl;
    
    insert(21);
    cout<<median()<<endl;
    
    insert(18);
    cout<<median()<<endl;
    
    insert(30);
    cout<<median()<<endl;
    insert(19);
    cout<<median()<<endl;
    return 0;

}