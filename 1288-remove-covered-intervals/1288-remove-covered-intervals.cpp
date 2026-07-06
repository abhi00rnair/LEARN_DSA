class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        struct comp{
            bool operator()(const vector<int>&a, const vector<int>&b){
                if (a[0]==b[0]){
                    return a[1]>b[1];
                }else{
                    return a[0]<b[0];
                }
            }
        };
        sort(intervals.begin(),intervals.end(),comp());
        int c=intervals[0][0];
        int d=intervals[0][1];
        int rett=1;
        for (int i=1;i<intervals.size();i++){
            int a=intervals[i][0];
            int b=intervals[i][1];
            if (!(c<=a && b<=d)){
                rett++;
            }
            c=min(c,a);
            d=max(b,d);
        } 
        return rett;
    }

};