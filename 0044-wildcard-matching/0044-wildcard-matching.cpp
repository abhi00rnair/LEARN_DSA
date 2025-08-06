class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size(), m=p.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1, -1));
        return func(0,0, s, p, dp);
    }
    bool func(int i, int j, string&s, string&p, vector<vector<int>>&dp){
        if(i==s.size() && j==p.size()){
            return true;
        }
        if(j==p.size()){
            return false;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        bool tp=false;
        if(i<s.size() && (s[i]==p[j]|| p[j]=='?')){
            tp=func(i+1, j+1, s, p, dp);
        }else if(p[j]=='*'){
            tp=func(i, j+1, s, p, dp);
            if(i<s.size()){
                tp|=func(i+1, j, s, p, dp);
            }
        }
        return dp[i][j]=tp;
    }
};