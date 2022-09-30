
#include <bits/stdc++.h>

using namespace std;

void insert(stack<int>&s,int temp){
    
    if(s.empty()){
        s.push(temp);
        return;
    }
    
    
    int val=s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
    return;
}

void reverse_stack(stack<int>&s){
    
    if(s.size()==0){
        return;
    }
    
    int temp=s.top();
    s.pop();
    reverse_stack(s);
    insert(s,temp);
    return;
}

int main()
{
    vector<int>v={4,2,6,3,1};
    stack<int>s;
    
    for(int x:v)
        s.push(x);
    
    stack<int>s1=s;
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    
    cout<<"after reverse ";
    
    reverse_stack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
        
    return 0;
}
