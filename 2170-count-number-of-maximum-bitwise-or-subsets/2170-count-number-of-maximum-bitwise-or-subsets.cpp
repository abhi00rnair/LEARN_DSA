class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxii=0;
        for(int i=0;i<nums.size();i++){
            maxii|=nums[i];
        }
        int count=0;
        func(0,nums,maxii, 0,count);
        return count;

    }

    void func(int i, vector<int>&nums,int target, int temp, int&count){
        if(i==nums.size()){
            if(temp==target){
                count++;
            }
            return ;
        }
        func(i+1,nums,target,temp | nums[i],count);
        func(i+1,nums,target, temp,count);
    }
};