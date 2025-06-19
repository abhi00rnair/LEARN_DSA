class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int start=nums[0], rett=1;
        for(auto num: nums){
            if(num-start>k){
                rett++;
                start=num;
            }
        }
        return rett;
    }
};