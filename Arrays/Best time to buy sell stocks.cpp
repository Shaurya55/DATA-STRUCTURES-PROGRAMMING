#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=0,sum=0;
    for(int i=1;i<n;i++){
        temp=a[i]-a[i-1];
        if(temp>0){
            sum+=temp;
        }
    }
    cout<<sum;
}