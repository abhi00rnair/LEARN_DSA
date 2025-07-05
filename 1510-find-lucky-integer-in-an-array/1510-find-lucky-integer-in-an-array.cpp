class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

        int rett=-1;
        for(auto it:mp){
            if(it.second==it.first){
                rett=max(rett,it.first);
            }
        }
        return rett;
    }
};