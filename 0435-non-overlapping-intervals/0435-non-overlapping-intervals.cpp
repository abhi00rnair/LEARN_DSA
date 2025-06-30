class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        int right=intervals[0][1],rett=0;
        for(int i=1;i<n;i++){
            int ll=intervals[i][0];
            int rr=intervals[i][1];
            if(ll<right){
                rett++;
            }else{
                right=rr;
            }
        }
        return rett;
    }
};