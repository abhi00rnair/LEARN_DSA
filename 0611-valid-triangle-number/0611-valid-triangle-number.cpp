class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int rett=0;
        int n=nums.size();
        for(int k=n-1;k>=0;k--){
            int i=0, j=k-1;
            while(i<=j){
                if(nums[i]+nums[j]>nums[k]){
                    rett+=(j-i);
                    j--;
                }else if(nums[i]+nums[j]<=nums[k]){
                    i++;
                }
            }
        }
        return rett;
    }
};

// a+b>c b+c>a c+a>b