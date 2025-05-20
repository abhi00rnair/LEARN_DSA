class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>temp(n+1,0);
        for(int i=0;i<queries.size();i++){
            temp[queries[i][0]]+=1;
            if((queries[i][1]+1)<n){
                temp[(queries[i][1]+1)]-=1;
            }
        }
        int ct=0;
        for(int i=0;i<n;i++){
            ct+=temp[i];
            nums[i]-=ct;
            if(nums[i]>0){
                return false;
            }
        }
        return true;
    }
};