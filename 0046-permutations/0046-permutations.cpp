class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ret;
        vector<int>temp;
        int n=nums.size();
        int map[n];
        for(int i=0;i<n;i++){
            map[i]=0;
        }
        func(nums,ret,temp,n,map);
        return ret;
    }
    
    void func(vector<int>&nums,vector<vector<int>>&ret,vector<int>&temp,int n,int map[]){
        if(temp.size()==n){
            ret.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(!map[i]){
            temp.push_back(nums[i]);
            map[i]=1;
            func(nums,ret,temp,n,map);
            map[i]=0;
            temp.pop_back();
        }
        }
        
        
    }
};