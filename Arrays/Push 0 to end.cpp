#include<bits/stdc++.h>
using namespace std;

void push0(int a[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            a[j]=a[i];
            j++;
        }
    }
    for(int i=j;i<n;i++){
        a[j]=0;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    push0(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}