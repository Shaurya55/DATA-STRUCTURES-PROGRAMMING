#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=0;
    int sum=0;
    int ma=INT_MIN;
    while(j<n){
        sum+=a[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            ma=max(ma,sum);
            sum-=a[i];
            i++;
            j++;
        }
    }
    cout<<ma;
}