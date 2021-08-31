#include<bits/stdc++.h>
using namespace std;

void selection(int a[],int n){
    for(int i=0;i<n-1;i++){
        int mi=a[i]; int pos=i;
        for(int j=i+1;j<n;j++){
            if(mi>a[j]){
                mi=a[j];
                pos=j;
            }
        }
        int temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
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
    selection(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}