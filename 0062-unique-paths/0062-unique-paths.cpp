class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>temp(m, vector<int>(n,1));
        func(0,0,m,n,temp);
        return temp[0][0];
        
    }

    int func( int i, int j, int m, int n,vector<vector<int>>&temp){
        if(i>=m || j>=n){
            return 0;
        }if(i==m-1 && j==n-1){
            return 1;
        }
        if(temp[i][j]!=1){
            return temp[i][j];
        }
        int tr=func(i+1,j,m,n,temp);
        int tp=func(i,j+1,m,n,temp);
        return temp[i][j]=tp+tr;
    }
};