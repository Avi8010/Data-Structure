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
int caldiameter(node* root, int* h){//optimise way with time complexity O(n)
    if(root==NULL){
        *h=0;
        return 0;
    }
    int lh=0,rh=0;
    int ld=caldiameter(root->left, &lh);
    int rd=caldiameter(root->right, &rh);

    int currd=lh+rh+1;
    *h =max(lh,rh) +1;
    return max(currd,max(ld,rd));
}
int diameter(node* root){ //time complexity O(n^2)
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    int currd=lh + rh +1;

    int ld=diameter(root->left);
    int rd=diameter(root->right);
    
    return max(currd,max(lh,rh));
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
    cout<<caldiameter(root, &h)<<" ";
    return 0;
}