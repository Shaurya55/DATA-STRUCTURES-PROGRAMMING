//brute force
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(a[i]+a[j]==k){
                cout<<a[i]<<" "<<a[j];
                cout<<endl;
            }
        }
    }
    return 0;
}

//using hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int temp=k-a[i];
        if(m.find(temp)==m.end()){
            m[a[i]]++;
        }
        else{
            c+=m[temp];
            m[a[i]]++;
        }
    
    }
    cout<<c;
    return 0;
}