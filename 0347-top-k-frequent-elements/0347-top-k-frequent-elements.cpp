class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>mp(mpp.begin(),mpp.end());
        sort(mp.begin(),mp.end(),[](const pair<int,int> a,const pair<int,int>b){
            return a.second>b.second;
        });
        vector<int>rett;
        for(int i=0;i<k;i++){
            rett.push_back(mp[i].first);
        }
        return rett;
    }
};