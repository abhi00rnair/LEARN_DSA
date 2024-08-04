class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>temp;
        func(nums,temp);
        sort(temp.begin(),temp.end());
        long long ret=0;
        long long mod=1000000007;
        for(int i=left-1;i<right;i++){
            ret=(ret+temp[i])%mod;
        }
        return static_cast<int>(ret);
    }
    void func(vector<int>&nums ,vector<int>&temp){
        int n=nums.size();
        for(int i=0;i<n;i++){
            int count=nums[i];
            temp.push_back(count);
            for(int j=i+1;j<n;j++){
                count+=nums[j];
                temp.push_back(count);
            }
        }
    }
};