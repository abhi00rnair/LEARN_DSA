class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>rett(nums.size(), -1);
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                rett[i]=nums[i];
            }else if(nums[i]>0){
                int tp=nums[i]+i;
                rett[i]=nums[tp%n];
            }else{
                int tp=(nums[i]+i)%n;
                if(tp<0){tp+=n;}
                rett[i]=nums[tp];
            }
        }
        return rett;
    }
};