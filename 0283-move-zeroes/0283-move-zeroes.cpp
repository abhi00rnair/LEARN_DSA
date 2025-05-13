class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=-1, n=nums.size();
        for(int j=0;j<n;j++){
            if(nums[j]==0){
                i=j;
                break;
            }
        }
        if(i!=-1){
            for(int j=i+1;j<n;j++){
                if(nums[j]!=0){
                    swap(nums[i],nums[j]);
                        i++;
                }
            }
        }
    }
};