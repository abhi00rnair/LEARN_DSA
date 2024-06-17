class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ret;
        int n=candidates.size();
        vector<int>temp;
        func(candidates,target,ret,temp,0,n);
        return ret;
    }
    void func(vector<int>&nums,int key,vector<vector<int>>&ret,vector<int>&temp,int i,int n){
     if(key==0){
         ret.push_back(temp);
         return;
     }
        for(int j=i;j<n;j++){
            if(j>i && nums[j]==nums[j-1])continue;
            if(nums[j]>key)break;
            temp.push_back(nums[j]);
            func(nums,key-nums[j],ret,temp,j+1,n);
            temp.pop_back();
        }
    }
};