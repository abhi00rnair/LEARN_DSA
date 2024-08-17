class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        int ret = 0, count = 0;
        
        while (j < n) {
            if (nums[j] == 0) {
                count++;
            }
            while (count>k) {
                if (nums[i] == 0) {
                    count--;
                }
                i++;
            }
            ret = max(ret, j - i + 1);
            j++;
        }
        return ret;
    }
};
