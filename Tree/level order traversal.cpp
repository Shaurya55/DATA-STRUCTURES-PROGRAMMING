#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void levelorder(node* root){
    if(root==NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* n1=q.front();
        q.pop();
        if(n1!=NULL){
            cout<<n1->data<<" ";
            if(n1->left)
                q.push(n1->left);
            if(n1->right)
                q.push(n1->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    levelorder(root);
}