class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int realsum=(n*(n+1))/2;
        int sumnums=0;
        
        for(int i=0;i<n;i++){
            sumnums+=nums[i];
        }
        return realsum-sumnums;
    }
};