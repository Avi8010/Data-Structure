#include <iostream>
using namespace std;
struct node {
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int search(int in[], int st,int en,int curr ){
    for(int i=st;i<=en;i++){
        if(in[i]==curr){
            return i;
        }
    }
    return -1;
}
node* buildtree(int pre[], int in[],int st,int en){
       static int idx=0;
       if(st>en){
        return NULL;
       }
       int curr=pre[idx];
       idx++;
       node* n = new node(curr);
       if(st==en){
        return n;
       }
       int pos = search(in,st,en,curr);
       n->left=buildtree(pre,in,st,pos-1);
       n->right=buildtree(pre,in,pos+1,en);
       return n;
}
void inorder(node* root ){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int pre[]={1,2,4,3,5};
    int in[]={4,2,1,3,5};  
    node* root = buildtree(pre,in,0,4);
    inorder(root);
    return 0;
}