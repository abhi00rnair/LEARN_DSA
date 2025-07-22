class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int rett=0,i=0,j=0;
        int temp=0;
        unordered_set<int>mp;
        for(int i=0;i<nums.size();i++){
            while(mp.find(nums[i])!=mp.end()){
                mp.erase(nums[j]);
                temp-=nums[j];
                j++;
            }
            temp+=nums[i];
            rett=max(rett,temp);
            mp.insert(nums[i]);
        }
        return rett;

    }
};