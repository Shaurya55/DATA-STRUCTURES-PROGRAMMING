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
struct Info{
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};
Info bstbt(node* root){
    if(root==NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL&&root->right==NULL){
        return {1,root->data,root->data,1,true};
    }
    Info curr;
    Info l=bstbt(root->left);
    Info r=bstbt(root->right);
    curr.size=1+l.size+r.size;
    if(l.isBST&&r.isBST&&l.max<root->data&&r.min>root->data){
        curr.min=min(l.min,max(r.min,root->data));
        curr.max=max(r.max,max(l.max,root->data));
        curr.ans=curr.size;
        curr.isBST=true;
        return curr;
    }
    curr.ans=max(l.ans,r.ans);
    curr.isBST=false;
    return curr;
}
int main(){
    node* root=new node(15);
    root->left=new node(20);
    root->right=new node(10);
    root->left->left=new node(5);
    cout<<bstbt(root).ans;
    
}