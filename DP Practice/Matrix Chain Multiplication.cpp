// q -> https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1

// User function Template for C++

class Solution{
public:
    
    int t[101][101];
    int solve(int arr[],int i,int j){
        
        if(i>=j)return 0;
        
        if(t[i][j]!=-1)return t[i][j];
        
        int ans=INT_MAX;
        for(int k=i;k<j;k++){
            
            int temp=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
            
            ans=min(ans,temp);
        }
        
        return t[i][j]=ans;
    }
    
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(t,-1,sizeof(t));
        return solve(arr,1,N-1);
    
    }
};
