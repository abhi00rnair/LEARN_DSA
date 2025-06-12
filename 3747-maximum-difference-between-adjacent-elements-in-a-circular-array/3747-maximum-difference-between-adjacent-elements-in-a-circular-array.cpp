class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int rett=0,n=nums.size();
        for(int i=0;i<n-1;i++){
            int temp=abs(nums[i]-nums[i+1]);
            rett=max(temp,rett);
        }
        int tp=abs(nums[n-1]-nums[0]);
        rett=max(tp,rett);
        return rett;
    }
};