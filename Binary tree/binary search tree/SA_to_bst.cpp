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
node* cbst(int arr[],int st,int en){
    if(st>en){
        return NULL;
    }
    int mid=(st+en)/2;
    node* root=new node(arr[mid]);
    root->left=cbst( arr,st,mid-1);
    root->right=cbst(arr,mid+1,en);
    return root;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int arr[]={10,20,30,40,50};
    node* root=cbst(arr,0,4);
    preorder(root);
    return 0;
}