#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int n;
    queue<int> q1;
    queue<int> q2;
  
    Stack(){
         n=0;
    }
     
    void push(int x){
        q2.push(x);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        q1.pop(); n--;
    }
    
    int top(){
        return q1.front();
    }
    
    int size(){
        return n;
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(6);
    s.push(7);
    s.push(8);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
}
