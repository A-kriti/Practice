// q -> https://practice.geeksforgeeks.org/problems/rotation4723/1

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    
	    if(n==1)return 0;
	    // code here
	    int l=0;
	    int r=n-1;
	    int ans;
	    
	    while(l<=r){
	        int m=(l+r)/2;
	        
	        int prev=(m+n-1)%n;
	        int next=(m+1)%n;
	        
	        if(arr[prev]> arr[m] && arr[m]< arr[next]){
	            ans= m;
	        }
	        
	        if(arr[m]<=arr[r]){
	            r=m-1;
	        }
	        
            else if(arr[m]>=arr[l]){
	            l=m+1;
	        }
	        
	        
	    }
	    return ans;
	}

};
