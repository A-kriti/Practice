// q -> https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1

//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
        string B=A;
        reverse(B.begin(),B.end());
        
        int n=A.size();
        int t[n+1][n+1];
        memset(t,-1,sizeof(t));
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0)
                    t[i][j]=0;
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(A[i-1]==B[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else 
                    t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
        
        return t[n][n];
    }
};
