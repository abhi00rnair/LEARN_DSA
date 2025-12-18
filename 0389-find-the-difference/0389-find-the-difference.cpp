class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>mp;
        for(char ch:t){
            mp[ch]++;
        }
        for(char ch:s){
            mp[ch]--;
            if(mp[ch]==0){
                mp.erase(ch);
            }
        }
        char rett;
        for(auto &it:mp){
            rett=it.first;
        }
        return rett;
    }
};