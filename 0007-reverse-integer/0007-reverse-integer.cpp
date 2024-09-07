class Solution {
public:
    int reverse(int x) {
        bool negative=false;
        if(x<0){
            negative=true;
        }
        x=abs(x);
        int ret=0;
        while(x!=0){
            if(ret>(INT_MAX/10)){
                return 0;
            }
            ret*=10;
            ret+=x%10;
            x=x/10;
        }
        if(negative){
            return -ret;
        }else{
            return ret;
        }
    }
};