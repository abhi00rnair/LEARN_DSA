class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,long long>mp;
        for(auto it:points){
            mp[it[1]]++;
        }
        vector<long long >count;
        for(auto it=mp.begin();it!=mp.end();it++){
            count.push_back(nC2(it->second));
        }
        long long rett=0;
        long long mod=1e9+7;
        int n=count.size();
        vector<long long>suffix(n, 0);

        suffix[n-1]=count[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=(suffix[i+1]+count[i])%mod;
        }

        for(int i=0;i<n-1;i++){
            long long value=(count[i]*suffix[i+1])%mod;
            rett=(rett+value)%mod;
        }
        return rett;

    }
    long long nC2(long long n){
        return (n*(n-1))/2;
    }
};