#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
bool hashtable[MAX+1][2];
bool search(int n){
    if(n>=0){
        if(hashtable[n][0]==1){
            return true;
        }
        else{
            return false;
        }
    }
    if(n<0){
        if(hashtable[n][1]==1){
            return true;
        }
        else{
            return false;
        }
    }
}
void assign(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            hashtable[a[i]][0]=1;
        }
        else{
            hashtable[abs(a[i])][0]=1;
        }
    }
}
int main(){
    int a[]={1,9,0,8,-3,-2,7};
    int n=sizeof(a)/sizeof(a[0]);
    assign(a,n);
    int sear=4;
    cout<<search(sear);
}