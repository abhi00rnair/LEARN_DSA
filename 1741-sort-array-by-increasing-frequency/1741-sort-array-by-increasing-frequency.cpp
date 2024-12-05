class Solution {
public:
 static bool compare(pair<int, int>&a, pair<int, int>&b){
            if(a.second==b.second){
                return a.first>b.first;
            }else{
                return a.second<b.second;
            }
        }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(int n :nums){
            mp[n]++;
        }
        vector<pair<int, int>>vec(mp.begin(), mp.end());
        sort(vec.begin(),vec.end(),compare);
        vector<int>ret;

        for(const auto &pp:vec){
            for(int i=0;i<pp.second;i++){
                ret.push_back(pp.first);
            }
        }
        return ret;
    }

};