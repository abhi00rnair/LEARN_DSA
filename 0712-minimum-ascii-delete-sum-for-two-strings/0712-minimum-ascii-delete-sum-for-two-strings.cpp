class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        vector<vector<int>>dp(s1.size(), vector<int>(s2.size(), -1));
        return func(s1,s2,0,0,dp);
    }

    int func(string&s1, string&s2, int index1, int index2,vector<vector<int>>&dp){
        if(index1==s1.size()){
            int sum=0;
            for (int k=index2;k<s2.size();k++){
                sum+=s2[k];
            }
            return sum;
        }
        if(index2==s2.size()){
            int sum=0;
            for(int k=index1;k<s1.size();k++){
                sum+=s1[k];
            }
            return sum;
        }
        if(dp[index1][index2]!=-1){
            return dp[index1][index2];
        }
        if(s1[index1]==s2[index2]){
            return dp[index1][index2]=func(s1,s2,index1+1,index2+1,dp);
        }
        return dp[index1][index2]=min(s1[index1]+func(s1,s2,index1+1,index2,dp), s2[index2]+func(s1,s2,index1,index2+1,dp));

    }
};