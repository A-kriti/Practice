// q -> https://www.includehelp.com/icp/maximum-value-in-a-bitonic-array.aspx

#include <bits/stdc++.h>

using namespace std;

//bitonic - contains both increasing and decreasing numbers pattern.

int max_in_bitonic_array(vector<int>v){
    
    int n=v.size();
    int l=0;
    int r=n-1;
    int ans=INT_MIN;
    
    while(l<=r){
        int m=(l+r)/2;
        int prev=(m+n-1)%n;
        int next=(m+1)%n;
        
        if(v[prev]<v[m] && v[m]>v[next]){
            ans=max(ans,v[m]);
            return ans;
        }
        
        else if(v[m]<v[next])l=m+1;
        
        else r=m-1;
    }
    
    return ans;
}

int main()
{
    vector<int>v={1,2,3,4,15,6,5,4};
    //vector<int>v={1,4,8,3,2};
    cout<<max_in_bitonic_array(v);

    return 0;
}
