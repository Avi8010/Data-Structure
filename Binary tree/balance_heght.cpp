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
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh) + 1;
}
bool isbalance(node* root ,int* h){ // time comlexity = O(n)
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(isbalance(root->left, &lh) == false){
        return false;
    }
    if(isbalance(root->right, &rh) == false){
        return false;
    }
    *h = max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
bool balance(node* root){ //  time comlexity = O(n^2)
    if(root==NULL){
        return true;
    }
    if(balance(root->left)==false){
        return false;
    }
    if(balance(root->right)==false){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(rh-lh)<=1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
     node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    int h=0;
    cout<<isbalance(root,&h);
    return 0;
}