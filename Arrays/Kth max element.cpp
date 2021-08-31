#include<bits/stdc++.h>
using namespace std;

int kmax(int a[],int n,int k){
    priority_queue<int> q;
    for(int i=0;i<n;i++){
        q.push(-a[i]);
        while(q.size()>k){
            q.pop();
        }
    }
    return -q.top();
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<kmax(a,n,k);
    return 0;
}