// q -> https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    //Top Down Approach
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        
      // Your code here
      int t[n+1][W+1];
      memset(t,-1,sizeof(t));
      
      for(int i=0;i<=n;i++){
          for(int j=0;j<=W;j++){
              
              if(i==0 || j==0)t[i][j]=0;
          }
      }
      
      for(int i=1;i<=n;i++){
          for(int j=1;j<=W;j++){
              
              if(wt[i-1]<=j){
                  t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
              }
              
              else t[i][j]=t[i-1][j];
          }
      }
      
      return t[n][W];
    }
    
    
    //Recurrsive Approach
    
    // int knapSack(int W, int wt[], int val[], int n) 
    // { 
    //   // Your code here
    //   if(n==0 || W==0)return 0;
       
    //   if(wt[n-1]<=W){
    //       return max((val[n-1]+knapSack(W-wt[n-1],wt,val,n-1)),knapSack(W,wt,val,n-1));
    //   }
       
    //   else if(wt[n-1]>W){
    //       return knapSack(W,wt,val,n-1);
    //   }
    // }
};
