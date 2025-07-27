class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int rett=0;
        for(int i=1;i<=nums.size()-1;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            int tp=i-1;
            while(tp>=0 && nums[tp]==nums[i]){
                tp--;
            }
            int tr=i+1;
            while(tr<nums.size()&& nums[tr]==nums[i]){
                tr++;
            }
            if(tp>=0 && tr<nums.size()){
                if((nums[tp]>nums[i] && nums[tr]>nums[i]) || (nums[tr]<nums[i] && nums[tp]<nums[i])){
                    rett++;
                }
            }
        }     
        return rett;
    }
};