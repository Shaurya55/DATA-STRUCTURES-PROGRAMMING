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
    
    int length(node* head){
        int l=0;
        node* temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        return l;
    }
    
    node* appendk(node* head, int k){
        node* newhead;
        node* newtail;
        int l=length(head);
        node* tail=head;
        int count=1;
        while(tail->next!=0){
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
    
    int main(){
        node* head=NULL;
        insertlast(head,1);
        insertlast(head,2);
        insertlast(head,3);
        insertlast(head,4);
        insertlast(head,5);
        inserthead(head,6);
        display(head);
        node* newnode=appendk(head,3);
        display(newnode);
        
        
        
        
        return 0;
    }
