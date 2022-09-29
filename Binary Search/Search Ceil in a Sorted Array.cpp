// q -> https://www.geeksforgeeks.org/ceiling-in-a-sorted-array/

#include <bits/stdc++.h>

using namespace std;

int Ceil_sorted(vector<int>v, int x){
    
    int n=v.size();
    int l=0;
    int r=n-1;
    int ans=-1;
    
    while(l<=r){
        int m=(l+r)/2;
        
        if(v[m]==x)return m;
        
        else if(v[m]>x){
            ans=m;
            r=m-1;
        }
        
        else l=m+1;
    }
    
    return v[ans];
}

int main()
{
    vector<int>v={1, 2, 8, 10, 10, 12, 19};
    int x=3;
    cout<<Ceil_sorted(v,x);

    return 0;
}
