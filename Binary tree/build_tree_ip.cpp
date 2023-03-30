#include <iostream>
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
int search(int in[],int st,int en,int val){
    for(int i=st;i<=en;i++){
        if(in[i]==val){
            return i;
        }
    }
    return -1;
}
node* buildtree(int post[],int in[],int st,int en){
    static int idx=en;
    if(st>en){
        return NULL;
    }
    int val=post[idx];
    idx--;
    node* curr= new node(val);
    if(st==en){
        return curr;
    }
    int pos=search(in,st,en,val);
    curr->right=buildtree(post,in,pos+1,en);
    curr->left=buildtree(post,in,st,pos-1);
    return curr;
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
    int post[]={4,2,5,6,1};
    int in[]={4,2,1,5,6};
    node* root=buildtree(post,in,0,4);
    inorder(root);
    return 0;
}
