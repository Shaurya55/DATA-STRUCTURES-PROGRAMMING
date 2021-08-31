#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int n){
    int fast=arr[0];
    int slow=arr[0];
    do{
        fast=arr[arr[fast]];
        slow=arr[slow];
    }while(fast!=slow);
    fast=arr[0];
    while(fast!=slow){
        fast=arr[fast];
        slow=arr[slow];
    }
    return slow;

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
    cout<<duplicate(a,n);
}
    