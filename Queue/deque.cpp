#include<bits/stdc++.h>
#include<deque>
using namespace std;
// sliding window maximum
int main(){
    int n,k;
    cin>>n>>k; 
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    //multiset<int,greater<int>> s;
    // vector<int> ans;
    // for(int i=0;i<k;i++){
    //     s.insert(a[i]);
    // }6
    // ans.push_back(*s.begin());
    // for(int i=k;i<n;i++){
    //     s.erase(s.lower_bound(a[i-k]));
    //     s.insert(a[i]);
    //     ans.push_back(*s.begin());
    // }
    // for(auto i: ans){
    //     cout<<i<<" ";
    // }
    deque<int> d;
    vector<int> ans;
    for(int i=0;i<k;i++){
        while(!d.empty() && a[d.back()]<a[i]){
            d.pop_back();
        }
        d.push_back(i);
    }
    ans.push_back(a[d.front()]); 
    cout<<endl;
    for(int i=k;i<n;i++){
        if(d.front()==i-k){
            d.pop_front();
        }
        while(!d.empty() && a[d.back()]<a[i]){
            d.pop_back();
        }
        d.push_back(i);
        ans.push_back(a[d.front()]);
    }
    for(auto i: ans){
        cout<<i<<" ";
    }

}
