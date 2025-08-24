class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0;
        int n=nums.size();
        int rett=0;
        int count=0;
        for(int right =0;right<n;right++){
            while(left<=right && count>1){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            if(nums[right]==0){
                count++;
            }if(count<=1){
                rett=max(rett,right-left+1);
            }
        }
        return rett-1;
    }
};