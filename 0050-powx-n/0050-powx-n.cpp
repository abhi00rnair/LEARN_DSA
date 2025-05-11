class Solution {
public:
    double myPow(double x, int n) {
        long nn=abs((long)n);
        double rett=1;
        while(nn){
            if(nn%2){
                rett*=x;
                nn--;
            }else{
                x=x*x;
                nn/=2;
            }
        }
        if(n<0){
            return 1/rett;
        }return rett;
    }
};