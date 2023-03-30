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
node* inordersucc(node* root){
    node* curr=root;
    while(curr && curr->left !=NULL){
        curr=curr->left;
    }
    return curr;
}
node* deletion(node* root,int key){
    if(key<root->data){
        root->left=deletion(root->left,key);
    }
    else if(root->data<key){
    root->right=deletion(root->right,key);
    }
    else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }
        node* temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=deletion(root->right,temp->data);
    }
    return root;

}
node* searchbst(node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return searchbst(root->left,key);
    }
    return searchbst(root->right,key);
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
    node* root=new node(4);
    root->left=new node(2);
    root->right=new node(6);
    root->left->left=new node(1);
    root->right->left=new node(5);
    /*
    if(searchbst(root,5 )==NULL){
        cout<<"key not exists"<<endl;
    }
    else{
        cout<<"key is present : "<<key<<endl;
    }
    */
   inorder(root);
   cout<<endl;
   root=deletion(root,2);
   cout<<endl;
   inorder(root);
    
    return 0;
}
