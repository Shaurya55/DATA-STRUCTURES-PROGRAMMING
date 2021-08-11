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

int maxpath(node* root, int &ans){
    if(root==NULL){
        return 0;
    }
    int left=maxpath(root->left,ans);
    int right=maxpath(root->right,ans);
    int nodemax=max(max(root->data,root->data+left+right),
                max(root->data+left,root->data+right));
                
    ans=max(ans,nodemax);
    int single=max(root->data,max(root->data+left,root->data+right));
    return single;
}

int maxpathsum(node* root){
    int ans=INT_MIN;
    maxpath(root,ans);
    return ans;
}

int main(){
    node* root=new node(4);
    root->left=new node(9);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right=new node(5);
    root->right->right=new node(6);
    cout<<maxpathsum(root);
}