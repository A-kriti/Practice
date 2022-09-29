// q -> https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        
        long long l=0;
        long long r=n-1;
        int ans=-1;
        
        while(l<=r){
            long long m=(l+r)/2;
            
            if(v[m]==x)return m;
            
            else if(v[m]<x){
                
                ans=m;
                l=m+1;
                
            }
            else {
                r=m-1;
            }
        }
        
        return ans;
    }
};
