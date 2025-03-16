class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix=1;
        int n=nums.size();
        vector<int>rett(n,1);

        for(int i=0;i<n;i++){
            rett[i]=prefix;
            prefix*=nums[i];
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            rett[i]*=suffix;
            suffix*=nums[i];
        }
        return rett;
    }
};