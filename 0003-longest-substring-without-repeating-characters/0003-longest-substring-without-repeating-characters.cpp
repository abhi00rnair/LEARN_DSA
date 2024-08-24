class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        unordered_map<char,int>mp;
        int ret=0;
        while(s[r]!='\0'){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                l++;
            }
            ret=max(ret,r-l+1);
            r++;
    }
        return ret;
    }
};