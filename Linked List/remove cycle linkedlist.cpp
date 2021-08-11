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
    
    void makecycle(node* &head, int pos){
        node* temp=head;
        node* start;
        int i=0;
        while(temp->next!=NULL){
            if(i==pos)
                start=temp;
            temp=temp->next;
            i++;
        } 
        temp->next=start;
    }
    
    void removedetect(node* &head){
        
        node* fast;
        node* slow;
        do{
            fast=fast->next->next;
            slow=slow->next;
        }while(fast!=slow);
        fast=head;
        
        while(fast->next!=slow->next){
            fast=fast->next;
            slow=slow->next;
            }
        slow->next= NULL;
        }
           
    int main(){
        node* head=NULL;
        insertlast(head,1);
        insertlast(head,2);
        insertlast(head,3);
        insertlast(head,4);
        insertlast(head,5);
        inserthead(head,6);
        //display(head);
        makecycle(head,3);
        removedetect(head);
        display(head);
        
        
        
        return 0;
    }
