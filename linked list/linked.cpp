#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    } 
};
void inserthead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head = n;
}
void insert(node* &head,int val){

    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}
bool search(node* head ,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        deletehead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;

    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    inserthead(head,4);
    
    cout<<search(head,2)<<endl;
    //deletehead(head);
    deletion(head,3);
    display(head);
    return 0;
}