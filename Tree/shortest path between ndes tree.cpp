#include <bits/stdc++.h>
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

node* lca(node* root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* left=lca(root->left,n1,n2);
    node* right=lca(root->right,n1,n2);
    if(left!=NULL&&right!=NULL){
        return root;
    }
    if(left==NULL&&right==NULL){
        return NULL;
    }
    if(left!=NULL){
        return left;
    }
    return right;
}

int findd(node* root, int k, int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left=findd(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
    return findd(root->right,k,dist+1);
}

int shortest(node* root,int n1,int n2){
    node* lc=lca(root,n1,n2);
    int d1=findd(lc,n1,0);
    int d2=findd(lc,n2,0);
    return d1+d2;
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->right=new node(4);
    root->right->right=new node(5);
    int n1=3;
    int n2=5;
    cout<<shortest(root,n1,n2);
    return 0;
}