#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int maxsumutil(node* root,int &ans){
    if(root==NULL){
        return 0;
    }
    int left=maxsumutil(root->left,ans);
    int right=maxsumutil(root->right,ans);
     int nodemax=max(max(root->data,root->data+left+right), max(root->data+left,root->data+right));
    ans=max(ans,nodemax);
    int single=max(root->data,max(root->data+left,root->data+right));
    return single;
}
int maxsum(node* root){
    
    int ans=INT_MIN;
    maxsumutil(root,ans);
    return ans;
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<maxsum(root)<<endl;
    
return 0;
}
