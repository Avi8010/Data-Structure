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
int sumof(node* root){
    if(root==NULL){
        return 0;
    }
    int s=root->data;
    return sumof(root->left)  + sumof(root->right) + s;
}
int count(node* root){
    if(root==NULL){
        return 0;
    }
    return count(root->left) + count(root->right) + 1;
}
int main(){
     node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<sumof(root);
}