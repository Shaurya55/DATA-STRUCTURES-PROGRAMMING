//brute force
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(a[i]==a[j]){
                cout<<a[j]<<" ";
            }
        }
    }
    return 0;
}

//optimized approach
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int index=abs(a[i]);
        if(a[index]<0){
            cout<<abs(a[i])<<" ";
        }
        else{
            a[index]=-a[index];
        }
    }
    return 0;
}