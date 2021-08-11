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

int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    return max(lheight,rheight)+1;
}

bool balancedtree(node* root){
    if(root==NULL){
        return true;
    }
    if(balancedtree(root->left)==false){
        return false;
    }
    if(balancedtree(root->right)==false){
        return false;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    if(abs(lheight-rheight)<=1){
        return true;
    }else{
        return false;
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
    cout<<balancedtree(root);
}