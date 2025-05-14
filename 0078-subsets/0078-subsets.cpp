class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>rett;
        vector<int>temp;
        int n=nums.size();
        func(nums,temp,rett,0,n);
        return rett;
    }

    void func(vector<int>nums, vector<int>&temp, vector<vector<int>>&rett, int i, int n){
        if(i>n-1){
            rett.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        func(nums,temp,rett,i+1,n);
        temp.pop_back();
        func(nums,temp,rett,i+1,n);
    }

};