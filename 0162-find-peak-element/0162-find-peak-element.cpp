class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int rett=0;
        fun(nums,0,nums.size()-1,&rett);
        return rett;
        
    }
    bool fun(vector<int>&nums, int low, int high, int *rett){
        if(low<=high){
            if(nums.size()==1){
                return true;
            }
            int mid=(low+high)/2;  
            if(mid==nums.size()-1 && nums[mid-1]<nums[mid]){
                *rett=mid;
                return true;
            }
            if(mid==0 && nums[mid+1]<nums[mid]){
                *rett=mid;
                return true;
            }
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                *rett=mid;
                return true;
            }
        else{
                if(fun(nums,low,mid-1,rett)==true){
                    return true;
                     }
                if(fun(nums,mid+1,high,rett)==true){
                    return true;
                }
        }
        }return false;
    }
};