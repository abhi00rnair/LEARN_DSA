class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxxi=*max_element(nums.begin(), nums.end());
        int rett=0;
        int curr=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxxi){
                curr++;
                rett=max(rett, curr);
            }else{
                curr=0;
            }
        }
        return rett;
    }
};