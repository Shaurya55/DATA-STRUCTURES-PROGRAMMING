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

int search(int inorder[], int start, int end, int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

node* buildtree(int preorder[], int inorder[], int start, int end){
    if(start>end){
        return NULL;
    }
    static int idx=0;
    int curr=preorder[idx];
    idx++;
    node* node1=new node(curr);
    
    if(start==end){
        return node1;
    }
    
    int pos=search(inorder, start, end, curr);
    node1->left=buildtree(preorder,inorder,start,pos-1);
    node1->right=buildtree(preorder,inorder,pos+1,end);
    return node1;
}

void inorderprint(node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

int main(){
    int preorder[5]={1,2,4,3,5};
    int inorder[5]={4,2,1,3,5};
    
    node* root=buildtree(preorder,inorder,0,4);
    inorderprint(root);
}