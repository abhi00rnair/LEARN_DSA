class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>rett(n,vector<int>(n,-1));
        int val=1;
        int top=0,bottom=n-1,left=0,right=n-1;

        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                rett[top][i]=val;
                val++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                rett[i][right]=val;
                val++;
            }
            right--;
            for(int i=right;i>=left;i--){
                rett[bottom][i]=val;
                val++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                rett[i][left]=val;
                val++;
            }
            left++;
        }
        return rett;
    }
};