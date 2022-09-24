// q-> https://www.interviewbit.com/problems/subset-sum-problem/

int Solution::solve(vector<int> &A, int B) {
    
    int n=A.size();
    int t[n+1][B+1];
    memset(t,-1,sizeof(t));
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=B;j++){
            
            if(i==0)t[i][j]=0;
            if(j==0)t[i][j]=1;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=B;j++){
            
            if(A[i-1]<=j){
                t[i][j]=t[i-1][j-A[i-1]] || t[i-1][j];
            }
            
            else t[i][j]=t[i-1][j];
        }
    }
    
    return t[n][B];
}
