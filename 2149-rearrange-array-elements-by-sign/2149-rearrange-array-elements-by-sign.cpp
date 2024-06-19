class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ret;
        int n=nums.size();
        func(ret,nums,n);
        return ret;
    }
    
    void func(vector<int>&ret,vector<int>&nums,int n){
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ret.push_back(nums[i]);
                //ret.push_back(0);
            }
        }
        int temp=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ret.insert(ret.begin()+temp,nums[i]);
                temp+=2;
            }
        }
    }
};