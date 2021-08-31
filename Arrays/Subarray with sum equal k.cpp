#include<bits/stdc++.h>
using namespace std;

int subarreqsum(int a[],int n,int k){
    if(n==0){
        return 0;
    }
    unordered_map<int,int> m;
    int curr=0;
    int i=0;
    int c=0;
    while(i<n){
        curr+=a[i];
        if(curr==k){
            c++;
        }
        if(m.find(curr-k)!=m.end()){
            c+=m[curr-k];
        }
        m[curr]++;
        i+=1;
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
    cout<<subarreqsum(a,n,k);
    return 0;
}