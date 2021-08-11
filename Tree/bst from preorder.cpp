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

node* pretree(int pre[], int* preorderidx,int key,int min,int max,int n){
    if(*preorderidx>=n){
        return NULL;
    }
    node* root=NULL;
    if(key>min&&key<max){
        root=new node(key);
        *preorderidx=*preorderidx+1;
    
    
    if(*preorderidx<n){
        root->left=pretree(pre,preorderidx,pre[*preorderidx],min,key,n);
    }
    if(*preorderidx<n){
        root->right=pretree(pre,preorderidx,pre[*preorderidx],key,max,n);
    }
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
    int pre[]={10,2,1,3,13,11};
    int n=5;
    int preorderidx=0;
    node* root=pretree(pre,&preorderidx,pre[0],INT_MIN,INT_MAX,n);
    inorder(root);
}