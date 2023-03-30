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

vector<node*> cbst(int start,int end){
    vector<node*> tree;
    if(start>end){
        tree.push_back(NULL);
        return tree;
    }
    for(int i=start;i<=end;i++){
        vector<node*> leftstree=cbst(start,i-1);
        vector<node*> rightstree=cbst(i+1,end);

        for(int j=0;j<leftstree.size();j++){
            node* left=leftstree[j];
            for(int k=0;k<rightstree.size();k++){
                node* right=rightstree[k];
                node* n=new node(i);
                n->left=left;
                n->right=right;
                tree.push_back(n);

            }
        }
    }
    return tree;
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
    vector<node*> totaltree = cbst(1,3 );
    for(int i=0;i<totaltree.size();i++){
        cout<<(i+1)<<" : ";
         preorder(totaltree[i]);
         cout<<endl;
    }
    return 0;
}