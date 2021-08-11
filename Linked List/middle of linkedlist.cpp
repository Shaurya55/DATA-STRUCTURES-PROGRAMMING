#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
    }
};

void insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertatlast(node* &head, int val){
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
int length(node* head){
    node* temp=head;
    int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
}
int middle(node* head){
    node* temp=head;
    int l=length(head);
    int k=l/2;
    int c=0;
    while(temp->next!=NULL&&c<k){
        temp=temp->next;
        c++;
    }
    return temp->data;
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
   insertathead(head, 7);
   insertatlast(head, 9);
   insertatlast(head, 10);
   insertatlast(head, 5);
   insertatlast(head, 19);
   insertatlast(head, 6);
   insertatlast(head, 0);
   display(head);
   cout<<length(head)<<endl;
   cout<<middle(head)<<endl;
   
   return 0;
   
}