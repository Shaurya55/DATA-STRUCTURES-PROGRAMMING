#include<bits/stdc++.h>
using namespace std;

int prod(int a[],int n){
    int mi=a[0];
    int ma=a[0];
    int prod=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<0){
            swap(mi,ma);
        }
        mi=min(a[i],a[i]*mi);
        ma=max(a[i],a[i]*ma);
        if(ma>prod)
            prod=ma;
    }
    return prod;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<prod(a,n);
}