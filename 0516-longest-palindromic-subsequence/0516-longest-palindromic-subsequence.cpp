class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string temp=s;
        int n=s.size();
        reverse(temp.begin(), temp.end());
        vector<vector<int>>dp(n, vector<int>(n, -1));
        return func(0,0,s,temp, dp);
    }
    int func(int i, int j, string&s, string &temp, vector<vector<int>>&dp){
        if(i>=s.size() || j>=temp.size()){
            return 0;
        }
        if(s[i]==temp[j]){
            return dp[i][j]=1+func(i+1, j+1, s, temp, dp);
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int tp=func(i+1, j, s, temp, dp);
        int tr=func(i, j+1, s, temp, dp);
        return dp[i][j]=max(tp,tr);
    }
};