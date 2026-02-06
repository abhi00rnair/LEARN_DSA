class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int max_wind=0;
        sort(nums.begin(), nums.end());
        int i=0,j=0,n=nums.size();
        while(j<n){
            while((long long)nums[j]>(long long)nums[i]*k){
                i++;
            }
            max_wind=max(max_wind,j-i+1);
            j++;
        }
        return (n-max_wind);

    }
};