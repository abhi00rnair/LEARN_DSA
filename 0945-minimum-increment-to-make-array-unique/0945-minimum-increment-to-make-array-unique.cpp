class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int rett=0;
        int n=nums.size();
        int incr=0;
        
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                incr=1+(nums[i-1]-nums[i]);
                nums[i]+=incr;
                rett+=incr;
            }
        }
        return rett;
    }
};