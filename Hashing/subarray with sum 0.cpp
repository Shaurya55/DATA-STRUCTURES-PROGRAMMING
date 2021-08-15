#include<bits/stdc++.h>
using namespace std;

bool subarraysum(int arr[],int n){
    unordered_set<int> s;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                return true;
            }
            if(s.find(sum)!=s.end()){
                return true;
            }
            s.insert(sum);
        }
         return false;
}

int main(){
    int a[]={1,2,3,-999991,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<subarraysum(a,n);
}
