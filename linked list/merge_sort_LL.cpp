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
void inserthead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
    head->pre=n;
    }
    head=n;
}     
node* merge(node* &head1, node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node* p3=dummynode; 
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
       p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
}
node* mergerec(node* &head1, node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=mergerec(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergerec(head1,head2->next);
    }
    return result;
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
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    node* head1=NULL;
    node* head2=NULL;
    inserttail(head1,2);
    inserttail(head1,4);
    inserttail(head1,11);
    inserttail(head1,12);
    inserttail(head2,3);
    inserttail(head2,5);
    inserttail(head2,7);
    inserttail(head2,17);
    inserttail(head2,20);
    display(head1);
    display(head2);
    node* newhead=mergerec(head1,head2);
    display(newhead);
    
    return 0;
}