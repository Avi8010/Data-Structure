#include <bits/stdc++.h>
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
void inserthead(node* &head, int val){
    node* n=new node{val};
    if(head==NULL){
     n->next=n;
     head=n;
     return;
    }
    node* temp=head;
     while(temp->next!=head){
         temp=temp->next;
     }
     temp->next=n;
     n->next=head;
     head=n;
}
void deletehead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;

    }
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int pos){
    if(pos==1){
        deletehead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;


}

void inserttail(node* &head,int val){
    if(head==NULL){
        inserthead(head,val);
        return;
    }
     node* n = new node{val};
     node* temp=head;
     while(temp->next!=head){
         temp=temp->next;
     }
     temp->next=n;
     n->next=head;
}

void display(node* head){
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main(){
    node* head=NULL;
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,4);
    inserttail(head,5);
    inserttail(head,6);
    inserttail(head,7);
    display(head);
    return 0;
}