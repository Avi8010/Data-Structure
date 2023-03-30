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
bool valid(node* root,node* min=NULL,node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data <=min->data){
        return false;
    }
    if(max!=NULL && root->data >= max->data){
        return false;
    }
    bool lvalid=valid(root->left,min,root);
    bool rvalid=valid(root->right,root,max);
    return lvalid and rvalid;
}
int main(){
     node* root=new node(4);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(1);
    root->right->left=new node(5);
    if(valid(root,NULL,NULL)){
        cout<<"valid"<<endl;
    }
    else{
        cout<<"not valid"<<endl;
    }
    return 0;
}