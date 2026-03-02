class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int>tp;
        int n=grid.size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]==0){
                    count++;
                }else{
                    break;
                }
            }
            tp.push_back(count);
        }
        int rett=0;
        for(int i=0;i<n;i++){
            int need=n-i-1;
            int j=i;
            while(j<n && tp[j]<need){
                j++;
            }
            if(j==n){
                return -1;
            }
            while(j>i){
                swap(tp[j],tp[j-1]);
                rett++;
                j--;
            }
        }
        return rett;
    }
};