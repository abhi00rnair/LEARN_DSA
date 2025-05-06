class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ret=INT_MIN;
        int left=0;
        int right=0;
        int n=s.length();
        if(n<=0){
            return 0;
        }
        map<char,int>mp;
        while(right<n){
            mp[s[right]]++;
            while(mp[s[right]]>1){
                mp[s[left]]--;
                left++;
            }
            ret=max(ret,right-left+1);
            right++;
        }
        return ret;
    }
};