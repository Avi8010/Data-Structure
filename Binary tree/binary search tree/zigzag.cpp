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
void zigzag(node* root){
    if(root==NULL){
        return;
    }
    stack<node*> curr;
    stack<node*> next;
    bool ltor=true;
    curr.push(root);
    while(!curr.empty()){
        node* temp=curr.top();
        curr.pop();
        if(temp){
            cout<<temp->data<<" ";
        
            if(ltor){
            if(temp->left){
                next.push(temp->left);
            }
            if(temp->right){
                next.push(temp->right);
            }
            }
            else{
            if(temp->right){
                next.push(temp->right);
            }
            if(temp->left){
                next.push(temp->left);
            }
            }
        }
        if(curr.empty()){
            ltor = !ltor;
            swap(curr,next);
        }
    }
}
int main(){
     node* root=new node(4);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(1);
    root->right->left=new node(5);
    zigzag(root);
    return 0;
}