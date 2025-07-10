class Solution {
public:
    int countTexts(string pressedKeys) {
        map<char, int>mp;
        int mod=1e9+7;
        mp['2']=3;
        mp['3']=3;
        mp['4']=3;
        mp['5']=3;
        mp['6']=3;
        mp['7']=4;
        mp['8']=3;
        mp['9']=4;
        int n=pressedKeys.size();
        vector<int>dp(n+1,-1);
        return func(mp,pressedKeys,0,n, mod,dp);
    }

    int func(map<char, int>&mp,string &s, int i, int n, int mod, vector<int>&dp){
        if(i>=n){
            return 1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int res=0;
        int nn=mp[s[i]];
        for(int j=0;j<nn && i+j<n &&s[i+j]==s[i];j++){
            res=(res+func(mp,s,i+j+1,n,mod,dp))%mod;
        }
        return dp[i]=res;
    }
};