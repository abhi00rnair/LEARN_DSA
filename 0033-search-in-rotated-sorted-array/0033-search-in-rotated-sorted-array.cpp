class Solution {
public:
    int search(vector<int>& nums, int target) {
        return recfun(nums,0,nums.size()-1,target);
    }
    int recfun(vector<int>nums,int low,int high,int key){
        if(low>high){
            return -1;
        }
        int mid=(low+high)/2;
        if(nums[mid]==key){
            return mid;
        }
        if (nums[low]<=nums[mid]) {
            if (nums[low]<=key && key < nums[mid]) {
                return recfun(nums, low, mid-1, key);
            } else {
                return recfun(nums, mid+1, high, key);
            }
        } else {
            if (nums[mid]<key && key<=nums[high]) {
                return recfun(nums, mid+1, high, key);
            } else {
                return recfun(nums, low, mid-1, key);
            }
        }
    }
};