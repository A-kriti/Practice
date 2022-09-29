// q -> https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    
        int first=-1;
        int last=-1;
        
        int l1=0;
        int r1=n-1;
        
        while(l1<=r1){
            int m1=(l1+r1)/2;
            if(arr[m1]==x){
                first=m1;
                r1=m1-1;
            }
            
            else if(arr[m1]<=x)l1=m1+1;
            else r1=m1-1;
        }
        
        
        
        int l2=0;
        int r2=n-1;
        
        while(l2<=r2){
            int m2=(l2+r2)/2;
            if(arr[m2]==x){
                last=m2;
                l2=m2+1;
            }
            
            else if(arr[m2]<=x)l2=m2+1;
            else r2=m2-1;
        }
        
        if(first==-1 || last==-1)return 0;
        return last-first+1;
	}
};
