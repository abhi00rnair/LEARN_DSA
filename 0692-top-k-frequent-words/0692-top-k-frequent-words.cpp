class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>mp;
        for(string it: words){
            mp[it]++;
        }

        priority_queue<pair<int,string>, vector<pair<int,string>>,comp>pq;
        for(auto it: mp){
            pq.push({it.second, it.first});
        }
        vector<string>rett;
        for(int i=1;i<=k;i++){
            rett.emplace_back(pq.top().second);
            pq.pop();
        }
        return rett;
    }
    struct comp{
    bool operator()(const pair<int,string>&a, const pair<int,string>&b){
        if(a.first==b.first){
            if(a.second>b.second){
                return true;
            }return false;
        }else{
            if(a.first<b.first){
                return true;
            }else{
                return false;
            }
        }
    }
    };
};