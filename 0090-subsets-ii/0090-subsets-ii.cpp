class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ret;
        sort(nums.begin(),nums.end());
        vector<int>temp;
        int n=nums.size();
        func(nums,n,0,temp,ret);
        return ret;
    }
    
    void func(vector<int>&nums,int n, int i,vector<int>&temp,vector<vector<int>>&ret){
        ret.push_back(temp);
        for(int j=i;j<n;j++){
            if(j!=i && nums[j]==nums[j-1])continue;
            temp.push_back(nums[j]);
            func(nums,n,j+1,temp,ret);
            temp.pop_back();
        }
    }
};