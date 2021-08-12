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

bool checkBST(node* root) {
		static node *prev=NULL;
        if (root){  
        if (!checkBST(root->left))  
        return false;  
        if (prev != NULL && root->data <= prev->data)  
        return false;  
        prev = root;  
        return checkBST(root->right);  
      }  
   return true;
}
int main(){
    node* root=new node(12);
    root->left=new node(9);
    root->right=new node(15);
    root->left->left=new node(5);
    root->left->right=new node(10);
    
    cout<<checkBST(root);
}