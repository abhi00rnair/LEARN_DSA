class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0, high=(n*m)-1;

        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/m;
            int colo=mid%m;
            int temp=matrix[row][colo];

            if(temp==target){
                return true;
            }else if(temp<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return false;
    }
};