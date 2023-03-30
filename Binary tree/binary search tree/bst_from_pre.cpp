#include <iostream>
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
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
node* cbst(int pre[],int *pind,int key,int min,int max,int n){
    if(*pind>=n){
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max){
        root=new node(key);
        *pind=*pind+1;
    
        if(*pind<n){
        root->left=cbst(pre,pind,pre[*pind],min,key,n);
        }
        if(*pind<n){
        root->right=cbst(pre,pind,pre[*pind],key,max,n);
        }
    }
    return root;
}
int main(){
    int pre[]={10,2,1,13,11};
    int n=5;
    int pind=0;
    node* root=cbst(pre,&pind,pre[0],INT_MIN,INT_MAX,n);
    preorder(root);
    return 0;
}