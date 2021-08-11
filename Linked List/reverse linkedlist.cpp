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
    
    node* reverse(node* &head){
        node* prev=NULL;
        node* curr=head;
        node* nextptr;
        while(curr!=NULL){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
    
    node* recrecurr(node* &head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        node* newnode=recrecurr(head->next);
        head->next->next=head;
        head->next=NULL;
        return newnode;
    }
    
    int main(){
        node* head=NULL;
        insertlast(head,1);
        insertlast(head,2);
        insertlast(head,3);
        insertlast(head,4);
        insertlast(head,5);
        inserthead(head,6);
        display(head);
        node* newhead=recrecurr(head);
        display(newhead);
        
        
        return 0;
    }
