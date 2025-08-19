class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end(), [] (const vector<int>&a, const vector<int>&b){
            return a[0]<b[0];
        });

        vector<vector<int>>rett;
        int n=intervals.size();
        rett.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            vector<int>tp=rett.back();
            if(intervals[i][0] <=tp[1] && intervals[i][0]>=tp[0]){
                rett.pop_back();
                vector<int>temp;
                temp.push_back(min(tp[0], intervals[i][0]));
                temp.push_back(max(tp[1], intervals[i][1]));
                rett.push_back(temp);
            }else{
                rett.push_back(intervals[i]);
            }
        }
        return rett;
    }
};