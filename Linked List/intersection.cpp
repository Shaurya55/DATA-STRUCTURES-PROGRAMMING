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
    
    int intersection(node* headA, node* headB){
       if(headB==NULL||headA==NULL){
            return -1;
        }
        node* temp1=headA;
        node* temp2=headB;
        while(temp1!=temp2){
            if(temp1==NULL){
                temp1=headB;
            }
            else{
                temp1=temp1->next;
                //temp2=temp2->next;
            }
            if(temp2==NULL){
                temp2=headA;
            }
            else{
                //temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return temp1->data;
    
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
