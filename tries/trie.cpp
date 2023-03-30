#include <bits/stdc++.h>
using namespace std;


class trie{
    public:
    class node{
        public:
        bool end;
        node* next[26];
        node(){
            end = false;
            for(int i=0;i<26;i++){
                next[i]=NULL;
            }
        }
    };
    node* tri;
    trie(){
        tri=new node();
    }

    void insert(string word){
        int i=0;
        node* it=tri;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL)
                it->next[word[i]-'a']=new node();
            it=it->next[word[i]-'a'];
            i++;
        }
        it->end = true;
    }
    bool search(string word){
        int i=0;
        node* it=tri;
        while(i<word.size()){
            if(it->next[word[i]-'a']==NULL)
                return false;
            it=it->next[word[i]-'a'];
            i++; 
        }
        return it->end;
    }
};

int main(){
    trie* tt = new trie();
    vector<string> word={"abc","dfr"};
    for(auto w:word){
        tt->insert(w);
    }
    if(tt->search("mkl")){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    if(tt->search("abc")){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }


    return 0;
}