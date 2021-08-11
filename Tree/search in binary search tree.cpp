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
node* search(node* root, int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data>val){
        return search(root->left,val);
    }
    else if(root->data<val){
        return search(root->right,val);
    }
}
bool searchutil(node* root, int val){
    if(search(root,val)==NULL){
        return false;
    }
    else{
        return true;
    }
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
    cout<<endl;
    cout<<searchutil(root,8);
}