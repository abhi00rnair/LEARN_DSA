class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>rett(n,0);
        
        for(int i=0;i<n;i++){
            int index=nums[i];
            rett[i]=nums[index];
        }
        return rett;
    }
};