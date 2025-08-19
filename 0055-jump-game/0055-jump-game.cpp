class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxxi=0;

        for(int i=0;i<nums.size();i++){
            if(i>maxxi){
                return false;
            }
            maxxi=max(maxxi,nums[i]+i);
        }
        if(maxxi>=nums.size()-1){
            return true;
        }return false;
    }
};