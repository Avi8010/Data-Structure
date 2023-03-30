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
bool getpath(node* root,int key,vector<int> &paths){
    if(root==NULL){
        return false;
    }
    paths.push_back(root->data);
        if(root->data==key){
            return true;
        }
        if(getpath(root->left,key,paths) || getpath(root->right,key,paths)){
            return true;
        }
        paths.pop_back();
        return false;
    
}
int lca(node* root,int n1,int n2){
    vector<int> path,path2;
    if(!getpath(root,n1,path) || !getpath(root,n2,path2)){
        return -1;
    }
    int pc;
    for(pc=0;pc<path.size() && path2.size();pc++){
        if(path[pc] != path2[pc]){
            break;
        }
    }
    return path[pc-1];
}
node* lca2(node* root,int n1,int n2){ // method 2    O(n)
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* leftlca= lca2(root->left,n1,n2);
    node* rightlca= lca2(root->right,n1,n2);
    if(leftlca && rightlca){
        return root;
    }
    if(leftlca!=NULL){
        return leftlca;
    }
    return rightlca;

}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    root->right->right=new node(7);
    int n1=7;
    int n2=6;
    node* LCA=lca2(root,n1,n2);
    if(LCA==NULL){
        cout<<"lca not exist"<<endl;
    }
    else{
      cout<<"lca : "<<LCA->data<<endl;
    }
    
return 0;
}