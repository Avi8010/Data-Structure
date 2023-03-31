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
int intersection(node* &head1, node* &head2){
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1<l2){
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    else{
        d=l1-l2;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL &&  ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;

    }
    return -1;

}
void inserthead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
    head->pre=n;
    }
    head=n;
}
void intersect(node* &head1, node* &head2, int pos){
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
         temp2=temp2->next;
    }
    temp2->next=temp1;
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
    while(p1!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
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
    node* head1=NULL;
    node* head2=NULL;
    inserttail(head1,1);
    inserttail(head2,2);
    inserttail(head1,3);
    inserttail(head2,4);
    inserttail(head1,5);
    inserttail(head1,7);
    inserttail(head1,8);
    inserttail(head1,9);
    inserttail(head1,10);
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2)<<endl;
    
    return 0;
}