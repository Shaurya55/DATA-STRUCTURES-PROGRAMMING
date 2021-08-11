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
    
    node* reversek(node* &head, int k){
        node* prev=NULL;
        node* curr=head;
        node* nextpt;
        int c=0;
        while(curr!=NULL && c<k){
            nextpt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextpt;
            c++;
        }
        if(nextpt!=NULL){
            head->next=reversek(nextpt,k);
        }
        return prev;
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
        int k=2;
        node* newhead=reversek(head,k);
        display(newhead);
        
        
        
        return 0;
    }
