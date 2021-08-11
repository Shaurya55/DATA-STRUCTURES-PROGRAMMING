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

void subtree(node* root, int k){
    if(root==NULL||k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    subtree(root->left,k-1);
    subtree(root->right,k-1);
}

int printk(node* root, node* target, int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        subtree(root,k);
        return 0;
    }
    int dl=printk(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            subtree(root->right,k-dl-2);
        }
        return 1+dl;
    }
    int dr=printk(root->left,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            subtree(root->left,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}

int main(){
    node* root=new node(4);
    root->left=new node(9);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right=new node(5);
    root->right->right=new node(6);
    printk(root,root->left,1);
}