class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int left=0,right=k-1;
        int rett=nums[n-1];
        while(right<n){
            rett=min(rett,(nums[right]-nums[left]));
            left++;
            right++; 
        }
        return rett;
    }
};