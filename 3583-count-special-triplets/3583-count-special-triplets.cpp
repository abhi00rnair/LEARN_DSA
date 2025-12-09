class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int>right,left;
        for(int it:nums){
            right[it]++;
        }

        int n=nums.size(),mod=1e9+7;
        long long rett=0;
        for(int j=0;j<n;j++){
            int mid_val=nums[j];
            right[mid_val]--;
            int target=2*mid_val;

            long long right_count=right[target];
            long long left_count=left[target];

            rett=(rett+(right_count*left_count)%mod)%mod;
            left[mid_val]++;

        }
        return rett;
    }
};