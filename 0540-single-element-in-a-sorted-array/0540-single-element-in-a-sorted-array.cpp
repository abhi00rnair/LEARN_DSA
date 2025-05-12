class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int j=nums.size();
        return recfunn(nums,0,j-1);
    }
    int recfunn(vector<int>&nums, int low,int high){
        if(low==high){
            return nums[low];
        }else{
            int mid=(low+high)/2;
            if(mid%2==1){
                mid--;
            }
            if(nums[mid]==nums[mid+1]){
                return recfunn(nums,mid+2,high);
            }else{
                return recfunn(nums,low,mid);
            }
        }
    }
};