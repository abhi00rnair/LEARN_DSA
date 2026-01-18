class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int rett=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int k=min(n-i,m-j);
                for(int x=1;x<=k;x++){
                    if(func(i,j,x,grid)){
                        rett=max(rett,x);
                    }
                }
            }
        }
        return rett;
    }

    bool func(int row, int colo,int k, vector<vector<int>>&grid){
        int sum=0;
        for(int j=colo;j<colo+k;j++){
            sum+=grid[row][j];
        }
        for(int i=row;i<row+k;i++){
            int t1=0;
            for(int j=colo;j<colo+k;j++){
                t1+=grid[i][j];
            }
            if(t1!=sum){
                return false;
            }
        }
        for(int j=colo;j<colo+k;j++){
            int t1=0;
            for(int i=row;i<row+k;i++){
                t1+=grid[i][j];
            }
            if(t1!=sum){
                return false;
            }
        }
        int d1=0,d2=0;
        for(int i=0;i<k;i++){
            d1+=grid[row+i][colo+i];
            d2+=grid[row+i][colo+k-1-i];
        }
        if(d1!=sum || d2!=sum){
            return false;
        }
        return true;
    }
};