class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0;
        int r=0;
        int jumps=0;
        int n=nums.size();

        while(n-1>r){
            int far=0;
            for(int j=l;j<=r;j++){
                far=max(far, nums[j]+j);
            }
            l=r+1;
            r=far;
            jumps++;
        }
        return jumps;
    }
};