class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>rett;
        sort(nums.begin(), nums.end());
        int n=nums.size(), i=0;
        while(i<n){
            int minn=min({nums[i], nums[i+1], nums[i+2]});
            int maxx=max({nums[i],nums[i+1], nums[i+2]});
            if(maxx-minn<=k){
                rett.push_back({nums[i], nums[i+1], nums[i+2]});
                i=i+3;
            }else{
                return {};
            }
        }
        return rett;
    }
};