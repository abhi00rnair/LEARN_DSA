class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        unordered_map<char,int>ret;
        int rett=0;
        while(s[r]!='\0'){
            ret[s[r]]++;
            while(ret[s[r]]>1){
                ret[s[l]]--;
                l++;
            }
            rett=max(rett,r-l+1);
            r++;
    }
        return rett;
    }
};