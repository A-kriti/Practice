#include <bits/stdc++.h>

using namespace std;

void insert(stack<int>&s,int temp){
    
    if(s.size()==0 || s.top()<=temp){
        s.push(temp);
        return;
    }
    
    int val=s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
    return;
}

void sort(stack<int>&s){
    
    if(s.size()==0){
        return;
    }
    
    int temp=s.top();
    s.pop();
    sort(s);
    insert(s,temp);
    return;
}

int main()
{
    vector<int>v={4,2,6,3,1};
    stack<int>s;
    
    for(int x:v)
        s.push(x);
        
    
    sort(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
        
    return 0;
}
