// q -> https://www.geeksforgeeks.org/count-of-subsets-with-given-difference/

#include <bits/stdc++.h>
 
using namespace std;

int count(int arr[],int n,int k){
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    int w=(sum+k)/2;
    
    int t[n+1][w+1];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0)t[i][j]=0;
            if(j==0)t[i][j]=1;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            if(arr[i-1]<=j)
                t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    }
    
    return t[n][w];
    
}



// Driver's code
int main() {
 
 int n=4;
 int arr[4]={1,1,2,3};
 int k=1;
 
 cout<<count(arr,n,k);
 
  return 0;
}
