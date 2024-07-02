class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }
        int n=nums.size();
        int count=0;
        for(auto it:mp){
            if(it.second>n/2){
                count=it.first;
                break;
            }
        }
        return count;
    }
};