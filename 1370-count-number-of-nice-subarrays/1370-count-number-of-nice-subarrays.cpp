class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int x=func(nums,k);
        int y=0;
        if(k>0){
         y=func(nums,k-1);}else{
            y=0;
        }
        return x-y;
    }
    int func(vector<int>&nums,int k){
        int left=0;
        int right=0;
        int n=nums.size();
        int count=0;
        int sum=0;
        while(right<n){
            sum+=(nums[right]%2);
            while(sum>k){
                sum=sum-(nums[left]%2);
                left++;
            }
            count=count+(right-left+1);
            right++;
        }
        return count;
    }
};