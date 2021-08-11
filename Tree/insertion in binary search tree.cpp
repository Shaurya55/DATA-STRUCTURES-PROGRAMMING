#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* insert(node* root, int val){
    if(root==NULL){
        return new node(val);
    }
    if(root->data<val){
        root->right=insert(root->right,val);
    }
    else if(root->data>val){
        root->left=insert(root->left,val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node* root=NULL;
    root=insert(root,1);
    insert(root,9);
    insert(root,2);
    insert(root,6);
    insert(root,3);
    insert(root,0);
    insert(root,4);
    inorder(root);
}