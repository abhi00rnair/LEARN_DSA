class Solution {
public:
    int mySqrt(int x) {
        if(x==1){
            return 1;
        }
        int i=1,j=x/2,rett=0;
        while(i<=j){
            long long mid=((i+j)/2);
            long long pow=mid*mid;
            if(pow==x){
                return mid;
            }else if(pow<x){
                rett=mid;
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return rett;
    }
};