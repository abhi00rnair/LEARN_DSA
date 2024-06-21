class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        nums.clear();
        int ret=0;
        for(auto it:mp){
            nums.push_back(it.first);
            ret++;
        }
        return ret;
    }
};