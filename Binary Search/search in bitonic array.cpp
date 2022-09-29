// q -> https://www.geeksforgeeks.org/find-element-bitonic-array/

#include <bits/stdc++.h>

using namespace std;

//bitonic - contains both increasing and decreasing numbers pattern.

int element_in_bitonic_array(vector<int>v,int x){
    
    int n=v.size();
    int l=0;
    int r=n-1;
    
    while(l<=r){
        int m=(l+r)/2;
        
        if(v[m]==x)return m;
        
        if(v[l]<=v[m]){
            
            if(v[m]>=x && v[l]<=x)l=m+1;
            else r=m-1;
        } 
        
        else {
            if(v[m]<=x && v[r]>=x)r=m-1;
            else l=m+1;
        }
    }
    
    return -1;
}

int main()
{
    vector<int>v={1,2,3,4,15,6,5};
    int x=40;
    //vector<int>v={1,4,8,3,2};
    cout<<element_in_bitonic_array(v,x);

    return 0;
}
