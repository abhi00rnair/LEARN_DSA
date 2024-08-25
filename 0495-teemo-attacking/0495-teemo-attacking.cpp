class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 0 || duration == 0) {
            return 0;
        }
        int totalDuration = 0;
        int lastEnd = 0;

        for (int i = 0; i < n; i++) {
            int start = timeSeries[i];
            int end = start + duration;

            if (start < lastEnd) {
                // There is overlap, add only the non-overlapping part
                totalDuration += end - lastEnd;
            } else {
                // No overlap, add the full duration
                totalDuration += duration;
            }

            // Update the end time of the current poison effect
            lastEnd = end;
        }

        return totalDuration;
    }
};
