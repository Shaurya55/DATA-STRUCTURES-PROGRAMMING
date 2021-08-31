#include<bits/stdc++.h>
using namespace std;

int prod(int a[],int n,int k){
    int start=0;
    int end=0;
    int pro=1;
    int c=0;
    while(end<n){
        pro*=a[end];
        while(pro>=k){
            pro=pro/a[start++];
        }
        c+=end-start+1;
        end++;
    }
    return c;
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<prod(a,n,k);
}