// q -> https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int r=nums.size()-1;
        int l=0;
        
        while(l<=r){
            int mid=(l+r)/2;
            
            if(nums[mid]==target)return mid;
            if(nums[l]<=nums[mid]){
                
                if(nums[mid]>=target && nums[l]<=target){
                    r=mid-1;
                }
                else l=mid+1;
            }
            
            else {
                if(nums[mid]<=target  && nums[r]>=target){
                    l=mid+1;
                }
                else r=mid-1;
            }
        }
        
        return -1;
    }
};
