#include <iostream>
#include <stack>
using namespace std;

void insertbottom(stack<int> &st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertbottom(st,ele);

    st.push(topele);
}
void reversestack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reversestack(st);
    insertbottom(st,ele);
}
void reverse(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
       string word="";
       while(s[i]!=' ' && i<s.length()){
           word+=s[i];
           i++;
       }
       st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    //string s="hey, whats up?"; 

    reversestack(st);
       while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    return 0;

    
}