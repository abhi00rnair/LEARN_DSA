class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>rett(n,-1);
        for(int i=0;i<n;i++){
            int val=nums[i];
            if(nums[i]%2!=0){
                for(int j=0;j<32;j++){
                    int tp=nums[i]& ~(1<<j);
                    int next=tp+1;
                    if((tp | next) ==nums[i]){
                        val=min(val,tp);
                    }
                }
            }
            if(val!=nums[i]){
                rett[i]=val;
            }
        }
        return rett;
    }
};