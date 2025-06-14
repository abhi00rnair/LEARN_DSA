class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row=0,colo=m-1;

        while(row<n && colo>=0){
            if(matrix[row][colo]==target){
                return true;
            }else if(matrix[row][colo]>target){
                colo=colo-1;
            }else{
                row=row+1;
            }
        }
        return false;
    }
};