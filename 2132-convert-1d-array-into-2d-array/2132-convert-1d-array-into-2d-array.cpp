class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ret(m,vector<int>(n));
        if(original.size()!=m*n){
            return{};
        }
        int tp1=0;
        int tp2=0;
        for(int i=0;i<original.size();i++){
            if(tp1<m && tp2<n){
                ret[tp1][tp2]=original[i];
            }
            tp2++;
            if(tp2>=n){
                tp2=0;
                tp1++;
            }
        }
        return ret;
    }
};