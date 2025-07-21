class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size()+1, vector<int>(word2.size()+1,-1));
        return func(word1, word2, 0,0,dp);
    }

    int func(string&word1, string&word2, int i, int j,vector<vector<int>>&dp){
        if(i>=word1.size()){
            return dp[i][j]=word2.size()-j;
        }
        if(j>=word2.size()){
            return dp[i][j]=word1.size()-i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(word1[i]==word2[j]){
            return dp[i][j]=func(word1,word2,i+1,j+1,dp);
        }
        int tp=1+func(word1,word2,i+1,j,dp);
        int tr=1+func(word1, word2,i,j+1,dp);
        return dp[i][j]=min(tp,tr);
    }
};