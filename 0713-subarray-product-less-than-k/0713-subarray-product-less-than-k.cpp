class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int rett=0;
        long long prod=1;
        if(k<=1){
            return 0;
        }
        for(int i=0;i<n;i++){
            prod*=nums[i];

            while(prod>=k){
                prod/=nums[j];
                j++;
            }
            rett+=(i-j+1);
        }
        return rett;
    }
};