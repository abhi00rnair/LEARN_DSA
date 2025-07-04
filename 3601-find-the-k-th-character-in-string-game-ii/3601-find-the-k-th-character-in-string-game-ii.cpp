class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        int level = 0;
        while ((1LL << level) < k) {
            level++;
        }

        long long start = k - 1;
        int shift = 0;

        while (level > 0) {
            long long half = 1LL << (level - 1);
            if (start >= half) {
                start -= half;
                if (operations[level - 1] == 1) {
                    shift++;
                }
            }
            level--;
        }

        return 'a' + (shift % 26);
    }
};
