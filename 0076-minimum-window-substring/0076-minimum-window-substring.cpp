class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>mp1;
        for(char ch:t){
            mp1[ch]++;
        }
        int req=mp1.size();
        int form=0;

        int left=0;
        int right=0;
        int n=s.size();
        int str=0;
        int minlen=1e9;
        unordered_map<char,int>mp2;

        while(right<n){
        mp2[s[right]]++;
        if(mp1.count(s[right]) && mp1[s[right]]==mp2[s[right]]){
            form++;
        }
        while(form==req){
            if(minlen>right-left+1){
                minlen=right-left+1;
                str=left;
            }
            mp2[s[left]]--;
            if(mp1.count(s[left]) && mp1[s[left]]>mp2[s[left]]){
                form--;
            }
            left++;
        }
        right++;
        }
        return minlen==1e9 ? "" : s.substr(str,minlen);
    }
};