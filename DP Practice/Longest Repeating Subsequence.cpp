// q ->https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1

class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    string s=str;
		    int n=str.size();
		    int t[n+1][n+1];
		    
		    for(int i=0;i<=n;i++){
		        for(int j=0;j<=n;j++){
		            if(i==0 || j==0)t[i][j]=0;
		        }
		    }
		    
		    for(int i=1;i<=n;i++){
		        for(int j=1;j<=n;j++){
		            if(i-1!=j-1 && str[i-1]==s[j-1])
		                t[i][j]=1+t[i-1][j-1];
		            else 
		                t[i][j]=max(t[i-1][j],t[i][j-1]);
		        }
		    }
		    
		    
		    return t[n][n];
		}

};
