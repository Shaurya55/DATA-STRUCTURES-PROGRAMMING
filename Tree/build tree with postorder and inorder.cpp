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

node* buildtree(int postorder[], int inorder[], int start, int end){
    if(start>end){
        return NULL;
    }
    static int idx=4;
    int curr=postorder[idx];
    idx--;
    node* n1=new node(curr);
    if(start==end){
        return n1;
    }
    int pos=search(inorder,start,end,curr);
    n1->right=buildtree(postorder,inorder,pos+1,end);
    n1->left=buildtree(postorder,inorder,start,pos-1);
    
    return n1;
}
void inp(node* root){
    if(root==NULL){
        return;
    }
    inp(root->left);
    cout<<root->data<<" ";
    inp(root->right);
}
int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    node* root=buildtree(postorder,inorder,0,4);
    inp(root);
}