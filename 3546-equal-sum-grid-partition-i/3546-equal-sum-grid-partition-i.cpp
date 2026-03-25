class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<long long>rowsum(n);
        vector<long long>colosum(m);

        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=0;j<m;j++){
                sum+=grid[i][j];
            }
            if(i>0){
                sum+=rowsum[i-1];
            }
            rowsum[i]=sum;
        }
        for(int j=0;j<m;j++){
            long long sum=0;
            for(int i=0;i<n;i++){
                sum+=grid[i][j];
            }
            if(j>0){
                sum+=colosum[j-1];
            }
            colosum[j]=sum;
        }
        long long totsum=rowsum[n-1];
        for(int i=0;i<n-1;i++){
            if(rowsum[i]==totsum-rowsum[i]){
                return true;
            }
        }
        for(int j=0;j<m-1;j++){
            if(colosum[j]==totsum-colosum[j]){
                return true;
            }
        }
        return false;
    }
};