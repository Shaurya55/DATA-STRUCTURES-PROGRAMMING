#include<bits/stdc++.h>
using namespace std;

int nonrepeat(int a[], int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
        m[a[i]]++;
    for(int i=0;i<n;i++){
            int key=a[i];
            auto temp=m.find(key);
            if(temp->second>1){
                return a[i];
            }
        }
    return 0;
}
int main(){
    int a[]={1,4,1,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<nonrepeat(a,n);
    return 0;
}