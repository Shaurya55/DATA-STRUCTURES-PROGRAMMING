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

node* balancedbst(int arr[], int start, int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    node* root=new node(mid);
    root->left=balancedbst(arr,start,mid-1);
    root->right=balancedbst(arr,mid+1,end);
    return root;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int arr[5]={10,20,30,40,50};
    int start=0;
    int end=4;
    node* root=balancedbst(arr,start,end);
    preorder(root);
    return 0;
}