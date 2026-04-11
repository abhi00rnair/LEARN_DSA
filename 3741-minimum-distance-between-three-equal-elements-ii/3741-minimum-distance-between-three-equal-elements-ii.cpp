class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        int rett=INT_MAX;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            vector<int>&tp=mp[nums[i]];
            tp.push_back(i);
            if(tp.size()>=3){
                int ss=tp.size();
                int x=tp[ss-1];
                int y=tp[ss-2];
                int z=tp[ss-3];
                int temp=abs(x-y)+abs(y-z)+abs(x-z);
                rett=min(rett,temp);
            }
        }
        return rett==INT_MAX ? -1 : rett;
    }
};