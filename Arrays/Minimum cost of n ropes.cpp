#include <bits/stdc++.h>
using namespace std;


int main() {
	priority_queue<int> p;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n;i++){
	    p.push(-a[i]);
	}
	int ans=0;
    while(p.size()>1){
	    int first=p.top();
	    p.pop();
	    int second=p.top();
	    p.pop();
	    int add=first+second;
	    ans+=add;
	    p.push(add);
	}
	cout<<-ans;
}
