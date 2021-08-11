#include <iostream>
#include <math.h>
#include <string.h>
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
        node* n=new node(val);
        n->next=head;
        head=n;
    }
    
    void insertlast(node* &head, int val){
        node* n=new node(val);
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
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
    node* merge(node* head1, node* head2){
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
    
    node* recmerge(node* head1, node* head2){
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }
        node* result;
        if(head1->data<head2->data){
            result=head1;
            result->next=recmerge(head1->next,head2);
        }
        else if(head2->data<head1->data){
            result=head2;
            result->next=recmerge(head1, head2->next);
        }
        return result;
    }
    
    int main(){
        node* head=NULL;
        node* head2=NULL;
        insertlast(head,1);
        insertlast(head,2);
        insertlast(head,3);
        insertlast(head,4);
        insertlast(head,5);
        insertlast(head2,9);
        insertlast(head2,10);
        insertlast(head2,11);
        insertlast(head2, 12);
        display(head);
        display(head2);
        node* head3=merge(head,head2);
        display(head3);
        
        
        return 0;
    }
