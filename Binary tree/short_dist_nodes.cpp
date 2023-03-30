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
node* lca(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* left=lca(root->left,n1,n2);
    node* right=lca(root->right,n1,n2);
    if(left != NULL && right != NULL){
        return root;
    }
    if(left == NULL && right == NULL){
        return NULL;
    }
    if(left != NULL){
        return lca(root->left,n1,n2);
    }
    return lca(root->right,n1,n2);
}
int finddist(node *root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data == k){
        return dist;
    }
    int left=finddist(root->left,k,dist+1);
    if(left != -1){
        return left;
    }
    return finddist(root->right,k,dist+1);
}
int dist(node *root,int n1,int n2){
    node* lcas = lca(root,n1,n2);
    int d1=finddist(lcas,n1,0);
    int d2=finddist(lcas,n2,0);
    return d1 + d2;
}
int main(){
     node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    //root->left->right=new node(5);
    root->right=new node(3);
   // root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<dist(root,4,7);
return 0;
}
