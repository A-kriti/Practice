//q -> https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1

class Solution{

  public:
    
    // void subset(int arr[],int w,int *t[][]){
        
    // }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int w=0;
	    for(int i=0;i<n;i++){
	        w+=arr[i];
	    }
	    
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
	                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
	            else t[i][j]=t[i-1][j];
	        }
	    }
	    
	    vector<int>v;
	    for(int j=0;j<=w/2;j++){
	        if(t[n][j])v.push_back(j);
	    }
	    
	    int m=INT_MAX;
	    
	    for(int i=0;i<v.size();i++){
	        m=min(m,w-2*v[i]);
	    }
	    
	    return m;
	} 
};
