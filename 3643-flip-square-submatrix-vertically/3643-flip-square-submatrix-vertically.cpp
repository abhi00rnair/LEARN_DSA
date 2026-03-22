class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int top=x,bot=x+k-1;
        while(top<bot){
            for(int i=y;i<y+k;i++){
                int ele1=grid[top][i];
                grid[top][i]=grid[bot][i];
                grid[bot][i]=ele1;
            }
            top++;
            bot--;
        }
        return grid;
    }
};