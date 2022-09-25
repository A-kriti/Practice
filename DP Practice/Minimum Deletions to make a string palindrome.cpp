// q-> https://practice.geeksforgeeks.org/problems/minimum-deletitions1648/1

//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
        
        string c=S;
        reverse(c.begin(),c.end());
        int n=S.length();
        
        int t[n+1][n+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0|j==0){
                    t[i][j]=0;
                }
        }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(S[i-1]==c[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
        }
        }
        
        
        return n-t[n][n]; 
    } 
};
