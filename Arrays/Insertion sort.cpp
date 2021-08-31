#include<bits/stdc++.h>
using namespace std;

void insertion(int a[],int n){
    for(int i=1;i<n;i++){
        int curr=a[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(curr<a[j]){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=curr;
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
    insertion(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}