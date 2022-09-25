// q-> https://practice.geeksforgeeks.org/problems/coin-change2448/1

class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        // code here.
        long long int t[N+1][sum+1];
        memset(t,-1,sizeof(t));
        
        for(int i=0;i<=N;i++){
            for(int j=0;j<=sum;j++){
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
            }
        }
        
        for(int i=1;i<=N;i++){
            for(int j=1;j<=sum;j++){
                if(coins[i-1]<=j)
                    t[i][j]= t[i][j-coins[i-1]] + t[i-1][j];
                else t[i][j]=t[i-1][j];
            }
        }
        
        return t[N][sum];
    }
};
