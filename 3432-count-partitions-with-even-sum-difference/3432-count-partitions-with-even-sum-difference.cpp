class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total=accumulate(nums.begin(), nums.end(), 0);
        int left=0,rett=0,n=nums.size();
        for(int i=0;i<n-1;i++){
            left=left+nums[i];
            int diff=total-2*left;
            if(diff%2==0){
                rett++;
            }
        }
        return rett;
    }
};