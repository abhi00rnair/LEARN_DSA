class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
            if(mp[it]==3){
                mp.erase(it);
            }
        }
        auto it=mp.begin();
        return it->first;
    }
};