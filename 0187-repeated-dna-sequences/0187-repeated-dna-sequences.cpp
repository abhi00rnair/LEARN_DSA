class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size(),i=0;
        unordered_map<string,int>mp;
        vector<string>rett;
        while(i<=n-10){
            string tp=s.substr(i,10);
            if(mp[tp]==1){
                rett.push_back(tp);
                mp[tp]=-1;
            }else{
                if(mp[tp]!=-1){
                mp[tp]++;
                }
            }
            i++;
        }
        return rett;
    }
};