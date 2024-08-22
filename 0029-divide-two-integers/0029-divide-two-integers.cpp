class Solution {
public:
    int divide(int dividend, int divisor) {
        long long divid=abs(dividend);
        long long divis=abs(divisor);
        if(dividend==divisor){
            return 1;
        }if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }if(dividend==INT_MIN && divisor==1){
            return INT_MIN;
        }
        int ret=0;
        while(divid>=divis){
            int count=0;
            while(divid>=(divis<<(count+1))){
                count++;
            }
            int temp=1<<(count);
            divid=divid-(temp*divis);
            ret+=temp;
        }
        if(dividend<0 && divisor>0){
            return -ret;
        }if(dividend>0 && divisor<0){
            return -ret;
        }
        return ret;
    }
};