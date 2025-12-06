class Solution {
public:
    int numSub(string s) {
        int n=s.size(),i=0;
        vector<int>tp;
        while(i<n){
            if(s[i]=='1'){
                int count=0;
                while(i<n && s[i]!='0'){
                    count++;
                    i++;
                }
                tp.push_back(count);
            }
            i++;
        }
        int rett=0, mod=1e9+7;
        for(long long it:tp){
            long long temp=(((it+1)*it)/2)%mod;
            rett=(rett+temp)%mod;
        }
        return rett;
    }
};