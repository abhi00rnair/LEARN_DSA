class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> rett(2, -1);
        int first = func1(nums, target);
        if (first == -1) {
            return rett;
        }
        int last = func2(nums, target);

        rett[0] = first;
        rett[1] = last;
        return rett;
    }

private:
    int func1(vector<int>& nums, int key) {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == key) {
                if (mid == 0 || nums[mid - 1] != key) {
                    return mid;
                } else {
                    high = mid - 1;
                }
            } else if (nums[mid] > key) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
    
    int func2(vector<int>& nums, int key) {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == key) {
                if (mid == nums.size() - 1 || nums[mid + 1] != key) {
                    return mid;
                } else {
                    low = mid + 1;
                }
            } else if (nums[mid] > key) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
};
