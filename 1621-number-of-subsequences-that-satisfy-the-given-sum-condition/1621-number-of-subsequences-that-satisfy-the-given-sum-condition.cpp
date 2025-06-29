class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int rett=0;
        int MOD=1e9+7;
        int n=nums.size();
        sort(nums.begin(), nums.end());

        vector<int>power(n ,-1);
        power[0]=1;
        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2)%MOD;
        }
        int left=0,right=n-1;
        while(left<=right){
            if(nums[left]+nums[right]<=target){
                rett=(rett+power[right-left])%MOD;
                left++;
            }else{
                right--;
            }
        }
        return rett;
    }
};