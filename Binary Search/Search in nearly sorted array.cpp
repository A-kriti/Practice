// q->https://www.geeksforgeeks.org/search-almost-sorted-array/

#include <bits/stdc++.h>

using namespace std;

int Nearly_sorted(vector<int>v, int x){
    
    int n=v.size();
    int l=0;
    int r=n-1;
    
    while(l<=r){
        int m=(l+r)/2;
        
        int prev=(m+n-1)%n;
        int next=(m+1)%n;
        if(v[m]==x)return m;
        else if(v[prev]==x)return prev;
        else if(v[next]==x)return next;
        
        else if(v[m]>v[l]){
            l=m+2;
        }
        
        else r=m-2;
    }
    
    return -1;
}

int main()
{
    // vector<int>v={10, 3, 40, 20, 50, 80, 70};
    // int x=40;
    vector<int>v={10, 3, 40, 20, 50, 80, 70};
    int x=90;
    cout<<Nearly_sorted(v,x);

    return 0;
}
