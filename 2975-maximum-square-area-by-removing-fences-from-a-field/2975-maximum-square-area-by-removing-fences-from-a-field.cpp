class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        int mod=1e9+7;
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);
        sort(hFences.begin(),hFences.end());
        sort(vFences.begin(),vFences.end());
        long long rett=-1;
        unordered_set<int>st;
        for(int i=0;i<hFences.size();i++){
            for(int j=i+1;j<hFences.size();j++){
                st.insert(hFences[j]-hFences[i]);
            }
        }
        for(int i=0;i<vFences.size();i++){
            for(int j=i+1;j<vFences.size();j++){
                long long maxxi=vFences[j]-vFences[i];
                if(st.count(maxxi)){
                    rett=max(rett,maxxi);
                }
            }
        }
        return rett==-1 ? -1 :rett*rett%mod;
    }
};