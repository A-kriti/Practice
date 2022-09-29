#include <bits/stdc++.h>

using namespace std;

int Min_difference_sorted(vector<int>v, int x){
    
    int n=v.size();
    int l=0;
    int r=n-1;
    int ans=INT_MAX;
    
    while(l<=r){
        int m=(l+r)/2;
        
        if(v[m]==x)return 0;
        
        else if(v[m]>x){
            ans=min(ans,abs(v[m]-x));
            r=m-1;
        }
        
        else {
            ans=min(ans,abs(v[m]-x));
            l=m+1;
        }
    }
    
    return ans;
}

int main()
{
    vector<int>v={1, 2, 8, 10, 10, 12, 19};
    int x=15;
    cout<<Min_difference_sorted(v,x);

    return 0;
}
