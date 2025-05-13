class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            vector<int>nums1(n);
            for(int j=0;j<n;j++){
                nums1[j]=nums[(j+i)%n];
            }
            if(sortt(nums1)){
                return true;
            }
        }
        return false;
    }
    bool sortt(vector<int>nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
};