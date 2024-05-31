class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> retarr;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    retarr.push_back(i);
                    retarr.push_back(j);
                    return retarr;
                }
            }
        }
        return{};
    }
    
};