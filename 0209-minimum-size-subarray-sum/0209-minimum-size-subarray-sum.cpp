class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int rett=INT_MAX;
        int temp=0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            temp+=nums[right];
            while(temp>=target){
                int index=right-left+1;
                rett=min(rett,index);
                temp-=nums[left];
                left++;
            }
        }
        return rett==INT_MAX ? 0 :rett;
    }
};