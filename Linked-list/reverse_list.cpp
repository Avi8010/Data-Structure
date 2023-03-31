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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}
node* reverserec(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverserec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
node* reverse(node* &head){
    node* pre=NULL;
    node* curr=head;
    node* nextptr;
    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=pre;

        pre=curr;
        curr=nextptr;
    }
    return pre;
}
int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    display(head);
    node* newhead= reverserec(head);
    display(newhead);
    return 0;
}