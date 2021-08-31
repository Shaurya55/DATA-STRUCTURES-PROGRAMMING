#include<bits/stdc++.h>
using namespace std;

static bool comp(string a,string b){
    string o1=a+b;
    string o2=b+a;
    int i=0;
    while(o1[i]&&o2[i]){
        if(o1[i]>o2[i]){
            return true;
        }
        else if(o1[i]<o2[i]){
            return false;
        }
        i++;
    }
    return false;
}

string largest(int b[],int n){
    vector<string> a;
    for(int i=0;i<n;i++){
        a.push_back(to_string(b[i]));
    }
    sort(a.begin(),a.end(),comp);
    string ans="";
    for(auto x:a){
        ans+=x;
    }
    if(ans.length()==0){
        return "";
    }
    int i=0;
    while(i<ans.length()&&ans[i]=='0'){
        ans.erase(i);
        i++;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<largest(a,n);
}