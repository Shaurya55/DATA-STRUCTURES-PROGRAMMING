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
    
    bool search(node* &head, int val){
        node* temp=head;
        while(temp!=NULL){
            if(temp->data==val){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
    
    void display(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
    void deletion(node* &head, int val){
        if(head==NULL){
            return;
        }
        node* temp=head;
        while(temp->next->data!=val){
            temp=temp->next;
        }
        node* todelete=temp->next;
        temp->next=temp->next->next;
        
        delete todelete;
    }
    
    void deletehead(node* &head){
        node* todelete=head;
        head=head->next;
        
        delete todelete;
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
        deletion(head,5);
        deletehead(head);
        display(head);
        
        return 0;
    }
