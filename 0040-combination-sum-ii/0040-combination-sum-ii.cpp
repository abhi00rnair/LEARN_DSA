class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>rett;
        vector<int>temp;
        int n=candidates.size();
        func(candidates,target,rett,temp,0,n);
        return rett;
    }

    void func(vector<int>&nums, int target, vector<vector<int>>&rett,vector<int>&temp,int i, int n){
        if(target==0){
            rett.push_back(temp);
        }
        for(int j=i;j<n;j++){
            if(j>i && nums[j]==nums[j-1]){
                continue;
            }
            if(target<nums[j]|| target<0){
                break;
            }
            temp.push_back(nums[j]);
            func(nums,target-nums[j],rett,temp,j+1,n);
            temp.pop_back();

        }
    }
};