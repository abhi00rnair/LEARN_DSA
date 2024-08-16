class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxx=arrays[0].back();
        int minn=arrays[0][0];
        int ret=INT_MIN;
        int n=arrays.size();
        for(int i=1;i<n;i++){
            int first=arrays[i][0];
            int last=arrays[i].back();

            ret=max(ret,abs(maxx-first));
            ret=max(ret,abs(last-minn));

            minn=min(first,minn);
            maxx=max(last,maxx);
        }
        return ret;
    }
};