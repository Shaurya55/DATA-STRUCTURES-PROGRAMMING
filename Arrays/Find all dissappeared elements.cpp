#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(m[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
