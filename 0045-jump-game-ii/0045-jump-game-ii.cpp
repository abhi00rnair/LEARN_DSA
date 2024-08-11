class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int ret=0;
        int maxx=0;
        int end=0;
        for(int i=0;i<n-1;i++){
            maxx=max(maxx,i+nums[i]);
            if(i==end){
                ret++;
                end=maxx;
                if(end>=n-1){
                    break;
                }
            }
        }
        return ret;
    }
};