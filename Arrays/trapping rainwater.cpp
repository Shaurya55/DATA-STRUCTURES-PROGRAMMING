#include<bits/stdc++.h>
using namespace std;

int trap(int a[],int n){
    int result=0;
    int left=0,right=n-1,lmax=0,rmax=0;
    while(left<right){
        if(a[left]<a[right]){
            if(a[left]>lmax){
                lmax=a[left];
            }
            else{
                result+=lmax-a[left];
            }
            left++;
        }
        else{
            if(a[right]>rmax){
                rmax=a[right];
            }
            else{
                result+=rmax-a[right];
            }
            right--;
        }
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<trap(a,n);
    return 0;
}