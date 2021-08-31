#include<bits/stdc++.h>
using namespace std;

int secondlargest(int arr[],int n){
    int ma=arr[0];
    for(int i=0;i<n;i++){
        ma=max(ma,arr[i]);
    }
    int mu=arr[0];
    for(int i=0;i<n;i++){
        if(ma>arr[i]&&mu<arr[i]){
            mu=arr[i];
        }
    }
    return mu;
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
    cout<<secondlargest(a,n);
}
    