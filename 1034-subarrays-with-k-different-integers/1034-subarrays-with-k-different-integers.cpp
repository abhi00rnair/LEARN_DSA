class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
    }
    int func(vector<int>&nums, int k){
        int left=0,right=0,rett=0,n=nums.size();
        map<int,int>mp;
        while(right<n){
            mp[nums[right]]++;
                while(mp.size()>k){
                    mp[nums[left]]--;
                    if(mp[nums[left]]==0){mp.erase(nums[left]);}
                    left++;

                }
                rett+=(right-left+1);
            right++;
        }
        return rett;
    }
};