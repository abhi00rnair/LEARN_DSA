class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        int lastindex=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                if(lastindex!=-1 && i-lastindex-1<k){
                    return false;
                }
                lastindex=i;
            }
            
        }
        return true;
    }
};