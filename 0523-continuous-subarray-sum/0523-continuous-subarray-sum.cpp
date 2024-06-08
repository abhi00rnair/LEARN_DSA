class Solution {
public:
    bool checkSubarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> remainderIndex;
        int sum = 0;
        remainderIndex[0] = -1; // Handle the case where the sum becomes 0
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            int remainder = k == 0 ? sum : sum % k;
            if (remainderIndex.count(remainder)) {
                if (i - remainderIndex[remainder] > 1) {
                    return true;
                }
            } else {
                remainderIndex[remainder] = i;
            }
        }
        return false;
    }
};