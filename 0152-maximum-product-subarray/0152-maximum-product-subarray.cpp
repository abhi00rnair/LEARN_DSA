class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double suffix=1;
        double prefix=1;
        int ret=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(suffix==0){suffix=1;}
            if(prefix==0){prefix=1;}
            prefix*=nums[i];
            suffix*=nums[n-i-1];
            if (prefix > INT_MAX || prefix < INT_MIN) {
                prefix = nums[i];  
            }
            if (suffix > INT_MAX || suffix < INT_MIN) {
                suffix = nums[n - i - 1];
            }
            ret=max(ret,(int)max(suffix,prefix));
        }
        return ret;
    }
};