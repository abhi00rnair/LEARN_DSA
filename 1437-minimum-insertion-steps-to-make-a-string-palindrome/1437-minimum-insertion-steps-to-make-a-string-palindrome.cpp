class Solution {
public:
    int minInsertions(string s) {
        string temp=s;
        reverse(temp.begin(), temp.end());
        int n=s.size();
        vector<vector<int>>dp(n, vector<int>(n, -1));
        int lcs=func(0,0,s,temp,dp);
        return n-lcs;
    }
    int func(int i, int j, string&s, string &temp, vector<vector<int>>&dp){
        if(i>=s.size() || j>=s.size()){
            return 0;
        }
        if(s[i]==temp[j]){
            return dp[i][j]= 1+ func( i+1, j+1, s, temp, dp);
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int tp=func(i+1, j, s, temp, dp);
        int tr=func(i, j+1, s, temp, dp);
        return dp[i][j]= max(tp, tr);
    }
};