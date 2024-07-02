class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int ret=nums[low];
        while(low<=high){
            int mid=low+(high-low/2);
            if(nums[mid]<ret){
                ret=nums[mid];
            }
            if(nums[low]>nums[high]){
                if(nums[mid]>nums[high] && nums[mid]>nums[low]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }else{
                if(nums[mid]>nums[low] && nums[mid]>nums[high]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
        }
        return ret;
    }
};