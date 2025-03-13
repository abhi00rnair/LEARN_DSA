class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int ret=1;
        int tp=1;
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                tp++;
                ret=max(ret,tp);
            }else if(nums[i]!=nums[i-1]){
                tp=1;
            }
        }
        return ret;
    }
};