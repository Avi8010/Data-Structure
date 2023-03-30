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

bool issame(node* root1,node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool c1=root1->data==root2->data;
        bool c2=issame(root1->left,root2->left);
        bool c3=issame(root1->right,root2->right);
        if(c1 && c2 && c3){
            return true;
        }
        else{
            return false;
        }
    }

}
int main(){
    node* root1=new node(2);
    root1->left=new node(1);
    root1->right=new node(3);
    node* root=new node(2);
    root->left=new node(1);
    root->right=new node(4);
    
    if(issame(root1,root)){
        cout<<"identical"<<endl;

    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}