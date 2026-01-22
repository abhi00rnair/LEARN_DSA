class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int rett=0;
        if(check(nums)){
            return 0;
        }
        while(nums.size()>1){
            int n=nums.size();
            int index=0;
            int sum=INT_MAX;
            for(int i=0;i<n-1;i++){
                if(nums[i]+nums[i+1]<sum){
                    sum=nums[i]+nums[i+1];
                    index=i;
                }
            }
            nums.erase(nums.begin()+index);
            nums.erase(nums.begin()+index);
            nums.insert(nums.begin()+index,sum);
            rett++;
            if(check(nums)){
                break;
            }
        }
        return rett;
    }

    bool check (vector<int>&nums){
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                return false;
            }
        }
        return true;
    }
};