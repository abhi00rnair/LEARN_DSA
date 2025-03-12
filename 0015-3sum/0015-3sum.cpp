class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ret;
        if(n<3){
            return ret;
        }
        while(i<n-2){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int key=nums[i]+nums[j]+nums[k];
            if(key==0){
                ret.push_back({nums[i],nums[j],nums[k]});
                while (j < k && nums[j] == nums[j + 1]) ++j;
                while (j < k && nums[k] == nums[k - 1]) --k;
                ++j;
                --k;
                
            }else if(key<0){
                j++;
            }else{
                k--;
            }
            }
            int tp=nums[i];
            while(nums[i]==tp && i<n-2){
                i++;
            }
        }
        return ret;
    }
};