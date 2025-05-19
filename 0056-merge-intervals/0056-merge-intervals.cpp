class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>rett({intervals[0]});
        for(int i=1;i<n;i++){
            vector<int>temp=rett.back();
            if(intervals[i][0]<=temp[1]){
                temp[1]=max(temp[1],intervals[i][1]);
                rett.back()[1]=temp[1];
            }else{
                rett.push_back(intervals[i]);
            }
        }
        return rett;
    }
};