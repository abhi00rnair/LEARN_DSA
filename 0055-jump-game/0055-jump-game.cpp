class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return true;
        }
        int maxx=0;
        for(int i=0;i<n;i++){
            if(i>maxx){
                return false;
            }
            maxx=max(i+nums[i],maxx);
            if(maxx>=n-1){
                return true;
            }
        }
        return false;
    }
};