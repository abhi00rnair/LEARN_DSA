class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>rett(n,-1);
        for(int i=0;i<n;i++){
            int flag=1;
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    rett[i]=nums[j];
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                for(int j=0;j<=i-1;j++){
                    if(nums[j]>nums[i]){
                        rett[i]=nums[j];
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==1){
                rett[i]=-1;
            }
        }
        return rett;
    }
};