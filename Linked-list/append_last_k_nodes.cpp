#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* pre;
    node(int val){
        data=val;
        next=NULL;
        pre=NULL;
    } 
};
int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* appendk(node* &head, int k){
    node* newhead;
    node* newtail;
    node* tail=head;

    int l=length(head);
    int count=1;
    k=k%l;
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;

    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
void inserthead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
    head->pre=n;
    }
    head=n;
}

void inserttail(node* &head, int val){
    if(head==NULL){
        inserthead(head,val);
        return;
    }
    node* n = new node{val};
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next; 
    }
    temp->next=n;
    n->pre=temp;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,4);
    inserttail(head,5);
    display(head);
    node* newhead=appendk(head,3);
    display(newhead);
    return 0;
}