class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            high=max(high,nums[i]);
        }
         while (low<high) {
            int mid =low+(high-low) / 2;
            int sum =0;
            
            for (int num:nums) {
                sum +=(num+mid-1)/mid;
            }
            if (sum>threshold) {
                low =mid+1;
            } else {
                high=mid;
            }
        }
        
        return low;
    }
};