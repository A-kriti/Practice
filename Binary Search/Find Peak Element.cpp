// q ->https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)return 0;
        
        int l=0;
        int r=n-1;
        
        int ans;
        while(l<=r){
            int m=(l+r)/2;
            int prev=(m+n-1)%n;
            int next=(m+1)%n;
            
            if(nums[prev]<nums[m] && nums[m]> nums[next])return m;
           
            else if(nums[m]<nums[next])l=m+1;
            else r=m-1;
        }
    
        return ans;
    }
};
