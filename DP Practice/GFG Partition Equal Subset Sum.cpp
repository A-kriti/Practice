// q -> https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1

// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int n=N;
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        
        if(sum%2)return 0;
        int w=sum/2;
        
        int t[n+1][w+1];
        memset(t,-1,sizeof(t));
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=w;j++){
                if(i==0)t[i][j]=0;
                if(j==0)t[i][j]=1;
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(arr[i-1]<=j)
                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                else t[i][j]=t[i-1][j];
            }
        }
        
        return t[n][w];
        
    }
};
