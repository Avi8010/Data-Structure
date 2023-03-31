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
node* reversek(node* &head, int k){
    node* pre=NULL;
    node* curr=head;
    node* nextptr;
    int count=0;
    while(curr!=NULL && count<k){
        nextptr=curr->next;
        curr->next=pre;
        pre=curr;
        curr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
            head->next = reversek(nextptr,k);
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
    int k=2;
    node* newhead= reversek(head,k);
    display(newhead);
    return 0;
}