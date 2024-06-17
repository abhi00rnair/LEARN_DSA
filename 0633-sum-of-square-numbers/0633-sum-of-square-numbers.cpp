class Solution {
public:
    bool judgeSquareSum(int c) {
        int left=0;
        long long right=sqrt(c);
        
        while(left<=right){
            long long temp=(left*left)+(right*right);
            if(temp<c){
                left++;
            }if(temp>c){
                right--;
            }if(temp==c){
                return true;
            }
        }
        return false;
    }
};