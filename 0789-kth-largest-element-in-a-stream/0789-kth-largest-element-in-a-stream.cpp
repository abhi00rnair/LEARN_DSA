class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        // Sort ascending
        sort(nums.begin(), nums.end());

        // Push min(k, nums.size()) largest elements
        int n = nums.size() - 1;
        int count = min(k, (int)nums.size());

        for (int i = 0; i < count; i++, n--) {
            pq.push(nums[n]);
        }
    }

    int add(int val) {
        if (pq.size() < k) {
            pq.push(val);
        } else if (val > pq.top()) {
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};
