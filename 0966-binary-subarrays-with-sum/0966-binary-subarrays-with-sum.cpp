class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int left=0;
        int right=0;
        int countx=0;
        int n=nums.size();
        int sum=0;
        while(right<n){
            sum+=nums[right];
            while(sum>goal){
                sum-=nums[left];
                left++;
            }
            countx=countx+(right-left+1);
            right++;
        }
        int county=0;
        int x=0,y=0,sum2=0;
        if(goal>0){
        while(y<n){
            sum2+=nums[y];
            while(sum2>goal-1){
                sum2-=nums[x];
                x++;
            }
            county=county+(y-x+1);
            y++;
        }
        }
        return countx-county;
    }
};