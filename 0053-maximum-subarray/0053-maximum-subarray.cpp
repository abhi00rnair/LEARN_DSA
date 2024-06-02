class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int p1=nums[0];
        int p2=nums[0];
        
        for(int i=1;i<nums.size();i++){
            p1=max(nums[i],p1+nums[i]);
            if(p1>p2){
                p2=p1;
            }
        }
        return p2;
    }
};