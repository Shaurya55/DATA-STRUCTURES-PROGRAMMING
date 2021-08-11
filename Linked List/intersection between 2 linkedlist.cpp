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
    
    void intersect(node* head1, node* head2, int pos){
        node* temp1=head1;
        while(pos--){
            temp1=temp1->next;
        }
        node* temp2=head2;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp1;
    }
    
    int intersection(node* head1, node* head2){
       int l1=length(head1);
       int l2=length(head2);
       node* ptr1;
       node* ptr2;
       int d=0;
       if(l1>l2){
           d=l1-l2;
           ptr1=head1;
           ptr2=head2;
       }
       else if(l2>l1){
           d=l2-l1;
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
       while(ptr1->next!=NULL && ptr2->next!=NULL){
           if(ptr1==ptr2){
               return ptr1->data;
           }
           ptr1=ptr1->next;
           ptr2=ptr2->next;
       }
       return -1;
       
   }
    
    int main(){
        node* head=NULL;
        node* head2=NULL;
        insertlast(head,1);
        insertlast(head,2);
        insertlast(head,3);
        insertlast(head,4);
        insertlast(head,5);
        inserthead(head,6);
        insertlast(head2,9);
        insertlast(head2,10);
        intersect(head,head2,3);
        display(head);
        display(head2);
        cout<<intersection(head,head2);
        
        
        
        return 0;
    }
