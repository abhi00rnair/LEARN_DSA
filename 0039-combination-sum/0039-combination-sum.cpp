class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ret;
        vector<int>temp;
        int n=candidates.size();
        func(ret,candidates,target,0,n,temp);
        return ret;
    }
    
    void func(vector<vector<int>>&ret,vector<int>&nums,int sum, int i, int n,vector<int>temp){
        if(i==n){
            if(sum==0){
                ret.push_back(temp);
            }
            return ;
        }
        if(nums[i]<=sum){
            temp.push_back(nums[i]);
            func(ret,nums,sum-nums[i],i,n,temp);
            temp.pop_back();
        }
        func(ret,nums,sum,i+1,n,temp);
        
    }
};