class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minelem=nums[0];
        int rett=-1, n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>minelem){
                rett=max(rett,nums[i]-minelem);
            }else{
                minelem=min(minelem,nums[i]);
            }
        }
        return rett;
        
    }
};