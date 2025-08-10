class Solution {
public:
    int longestStrChain(vector<string>& words) {
        vector<int>dp(words.size(),1);
        sort(words.begin(), words.end() ,[] (const string&s1, const string&s2){
            return s1.length()<s2.length();
        });
        int rett=1;
        for(int i=1;i<words.size();i++){
            for(int j=0;j<i;j++){
                if(words[i].size()>words[j].size() && check(words[i], words[j], 0, 0)==1 && dp[i]<1+dp[j]){
                    dp[i]=1+dp[j];
                }
            }
            rett=max(rett, dp[i]);
        }
        return rett;
    }
    int check(string&s1, string&s2, int i, int j){
        if(i>=s1.size()){
            return s2.size()-j;
        }
        if(j>=s2.size()){
            return s1.size()-i;
        }
        if(s1[i]==s2[j]){
            return check(s1, s2, i+1, j+1);
        }else{
            return 1+check(s1, s2, i+1, j);
        }
    }
};