// q -> https://practice.geeksforgeeks.org/problems/rod-cutting0840/1

// User function Template for C++

class Solution{
  public:
    
    // variation of unbounded knapsac problem
    int cutRod(int price[], int n) {
        //code here
        
        int t[n+1][n+1];
        memset(t,-1,sizeof(t));
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0)
                    t[i][j]=0;
            }
        }
        
        int wt[n];
        for(int i=0;i<n;i++){
            wt[i]=i+1;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(wt[i-1]<=j)
                    t[i][j]=max(price[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
                    
                else t[i][j]=t[i-1][j];
            }
        }
        
        return t[n][n];
    }
};
