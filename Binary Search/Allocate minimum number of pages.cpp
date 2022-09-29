// q -> https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    //mx=max page possible
    bool isvalid(int A[], int N, int M,int mx){
        
        int students=1;
        int sum=0;
        
        for(int i=0;i<N;i++){
            
            sum+=A[i];
            if(sum>mx){
                students++;
                sum=A[i];
            }
            
            if(students>M)return 0;
        }
        
        return 1;
    }
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(N<M)return -1;
        
        int max_ele=INT_MIN;
        int sum=0;
        
        for(int i=0;i<N;i++){
            sum+=A[i];
            max_ele=max(max_ele,A[i]);
        }
        
        int l=max_ele;
        int r=sum;
        int ans=-1;
        
        while(l<=r){
            int mid=(l+r)/2;
            if(isvalid(A,N,M,mid)==1){
                //ans=min(ans,mid);
                ans=mid;
                r=mid-1;
                
            }
            else l=mid+1;
        }
        
        return ans;
    }
};
