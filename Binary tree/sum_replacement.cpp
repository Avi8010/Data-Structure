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
int sumreplace(node* root){
    if(root==NULL){
        return 0;
    }
    sumreplace(root->left);
    sumreplace(root->right);
    if(root->left!=NULL){
        root->data+=root->left->data;
    }
     if(root->right!=NULL){
        root->data+=root->right->data;
    }
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
     node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    inorder(root);
    cout<<endl;
    sumreplace(root);
    cout<<endl;
    inorder(root);
    return 0;
} 