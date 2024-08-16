class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long suffix=1;
        long long prefix=1;
        int ret=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(suffix==0){suffix=1;}
            if(prefix==0){prefix=1;}
            prefix*=nums[i];
            suffix*=nums[n-i-1];
                if (prefix > INT_MAX || prefix < INT_MIN) {
                prefix = nums[i];  // Reset prefix to current number to avoid overflow
            }
            if (suffix > INT_MAX || suffix < INT_MIN) {
                suffix = nums[n - i - 1];  // Reset suffix to current number to avoid overflow
            }
            ret=max(ret,(int)max(suffix,prefix));
        }
        return ret;
    }
};