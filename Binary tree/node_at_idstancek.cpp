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
void nodes(node* root,int k){ //case 1
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    nodes(root->left,k-1);
    nodes(root->right,k-1);
}
int nodesk(node* root,node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        nodes(root,k);
        return 0;
    }
    int dl= nodesk(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<endl;
        }
        else{
            nodes(root->left,k-dl-2);
        }
        return 1+dl;
    }
    int dr= nodesk(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<endl;
        }
        else{
            nodes(root->right,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    nodesk(root,root,2);
return 0;
}