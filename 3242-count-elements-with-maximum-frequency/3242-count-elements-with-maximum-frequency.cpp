class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int rett=0;
        int curr_max=0;
        unordered_map<int,int>mp;
        for(int it: nums){
            mp[it]++;
            curr_max=max(curr_max,mp[it]);
        }
        for(auto &it: mp){
            if(it.second==curr_max){
                rett+=it.second;
            }
        }
        return rett;
    }
};