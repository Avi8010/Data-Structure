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
void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
    head->pre=NULL;
    delete todelete;
}
void deletion(node* &head, int pos){
    node* temp=head;
    int count=1;
    if(pos==1){
            deletehead(head);
            return;
        }
    while(temp!=NULL && count!=pos){
        
        temp=temp->next;
        count++;
    }
    temp->pre->next=temp->next;
    if(temp->next!=NULL){
    temp->next->pre=temp->pre;
    }
    delete temp;

}

void oddeven(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenst=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenst;
    if(odd->next!=NULL){
        even->next=NULL;
    }
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
    inserttail(head,1);
    inserttail(head,3);
    inserttail(head,4);
    inserttail(head,6);
    
    evenodd(head);
    display(head);
    return 0;
}