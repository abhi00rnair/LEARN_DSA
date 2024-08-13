class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](pair<char,int>&a,pair<char,int>&b){
            return a.second>b.second;
        });
        string ret;
        for(auto it:vec){
            ret.append(it.second,it.first);
        }
        return ret;
    }
        /*bool comparator(const pair<char,int>&a,const pair<char,int>&b){
            return a.second<b.second;
        }*/
};