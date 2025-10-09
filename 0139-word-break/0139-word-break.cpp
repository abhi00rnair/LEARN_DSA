class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>tp(wordDict.begin(), wordDict.end());
        int n= s.size();
        vector<bool>dp(n+1,0);
        dp[0]=true;
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                string temp=s.substr(j,i-j);
                if(dp[j] && tp.find(temp)!=tp.end()){
                    dp[i]=1;
                    break;
                }
            }
        }
        return dp[n];
    }
};