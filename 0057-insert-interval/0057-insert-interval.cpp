class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        int i=0;
        int newstrt=newInterval[0],newend=newInterval[1];
        vector<vector<int>>rett;
        while(i<n && newstrt>intervals[i][1]){
            rett.push_back(intervals[i]);
            i++;
        }
        while(i<n && newend>=intervals[i][0]){
            newstrt=min(newstrt, intervals[i][0]);
            newend=max(newend,intervals[i][1]);
            i++;
        }
        rett.push_back({newstrt, newend});
        while(i<n){
            rett.push_back(intervals[i]);
            i++;
        }
        return rett;
    }
};