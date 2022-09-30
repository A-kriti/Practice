
#include <bits/stdc++.h>

using namespace std;

void remove_mid_element(stack<int>&s,int k){
    
    if(k==1){
        s.pop();
        return;
    }
    
    int temp=s.top();
    s.pop();
    remove_mid_element(s,k-1);
    s.push(temp);
    return;
}

int main()
{
    vector<int>v={4,2,6,3,1};
    stack<int>s;
    
    for(int x:v)
        s.push(x);
        
    int k=(s.size()/2)+1;
    
    remove_mid_element(s,k);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
        
    return 0;
}
