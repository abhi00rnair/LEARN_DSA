class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        int mod=1e9+7;
        vector<int>binaryarr=tobinary(n);
        vector<int>rett;
        vector<int>power;
        int tp=0;
        for(int i=binaryarr.size()-1;i>-1;i--){
            if(binaryarr[i]==1){
                power.push_back(1<<tp);
            }
            tp++;
        }
        
        for(int i=0;i<queries.size();i++){
            int left=queries[i][0];
            int right=queries[i][1];
            long long tp=1;
            for(int j=left;j<=right;j++){
                tp=(tp*power[j])%mod;
            }
            rett.push_back(tp);
        }
        return rett;
    }

    vector<int> tobinary(int n){
        vector<int>rett;
        while(n>0){
            rett.push_back(n%2);
            n=n/2;
        }
        reverse(rett.begin(), rett.end());
        return rett;
    }
};