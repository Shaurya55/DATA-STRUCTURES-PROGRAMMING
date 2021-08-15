#include<bits/stdc++.h>
using namespace std;

int intersection(int a[],int b[],int n,int m){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    int c=0;
    for(int i=0;i<m;i++){
        int key=b[i];
        if(s.find(key)!=s.end()){
            c++;
            s.erase(b[i]);
        }
    }
    return c;
}
int main(){
    int a[]={1,4,1,5,6};
    int b[]={4,5,6,0,3};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    cout<<intersection(a,b,n,m);
    return 0;
}