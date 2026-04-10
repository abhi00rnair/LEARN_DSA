class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int rett=INT_MAX;
        int n=nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            int val=nums[i];
            vector<int>&tp=mp[val];
            tp.push_back(i);
            if(tp.size()>=3){
                int n=tp.size();
                int x=tp[n-1];
                int y=tp[n-2];
                int z=tp[n-3];
                int temp=abs(x-y)+abs(y-z)+abs(z-x);
                rett=min(rett,temp);
            }
        }
        return rett==INT_MAX?-1:rett;
    }
};