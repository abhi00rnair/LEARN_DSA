class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }if(dividend==INT_MIN && divisor==1){
            return INT_MIN;
        }
        long n=abs((long)dividend);
        long d=abs((long)divisor);
        int ret=0;
        while(n>=d){
            int count=0;
            while(n>=(d<<(count+1))){
                count++;
            }
            long temp=d<<count;
            n-=temp;
            ret+=1<<count;
        }
        if(dividend<0 && divisor>0){
            return -ret;
        }if(dividend>0 && divisor<0){
            return -ret;
        }return ret;
    }
};