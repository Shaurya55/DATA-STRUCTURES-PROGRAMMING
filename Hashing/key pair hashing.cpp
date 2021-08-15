#include<bits/stdc++.h>
using namespace std;

bool keypair(int a[],int n, int key){
    unordered_map<int,int> m1;
    for(int i=0;i<n;i++){
        m1[a[i]]++;
    }
    for(auto it=m1.begin();it!=m1.end();it++){
	        int x=it->first;
	        int val=it->second;
	        int pair=key-x;
	        if(pair==x){
	            if(val>1){
	                return true;
	            }
	            
	                }
	                else{
	                if(m1.find(pair)!=m1.end()){
	                    return true;
	            }
	        }
	    }
	    return false;
}
int main(){
    int a[]={1,4,1,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int k=8;
    cout<<keypair(a,n,k);
    return 0;
}