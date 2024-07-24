class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        for(auto it :nums){
            high+=it;
        }
        int n=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=0;
            int subarraycount=1;
            for(int i=0;i<n;i++){
                if(count+nums[i]>mid){
                    count=nums[i];
                    subarraycount++;
                }else{
                    count+=nums[i];
                }
            }
            if(k>=subarraycount){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};