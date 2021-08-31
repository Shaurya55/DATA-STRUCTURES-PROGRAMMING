#include<bits/stdc++.h>
using namespace std;

vector<int> removdup(int a[],int n){
    set<int> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(auto x:s){
        v.push_back(x);
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans=removdup(a,n);
    for(auto x:ans){
        cout<<x<<" ";
    }
} 

#include<bits/stdc++.h>
using namespace std;

int removdup(int a[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int key =a[i];
        if(m.find(key)==m.end()){
            cout<<key<<" ";
        }
        m[key]=true;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    removdup(a,n);
    return 0;
}