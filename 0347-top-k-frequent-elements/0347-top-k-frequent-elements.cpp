class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int it:nums){
            mp[it]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        vector<int>rett;
        while(k!=0){
            rett.push_back(pq.top().second);
            k--;
            pq.pop();
        }
        return rett;
    }
};