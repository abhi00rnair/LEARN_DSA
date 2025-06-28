class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=func(n);
        while(fast!=1 && slow!=fast){
            slow=func(slow);
            fast=func(func(fast));
        }
        if(fast==1){
            return true;
        }return false;
        
    }
    int func(int n){
        int rett=0;
        while(n!=0){
            int tp=n%10;
            rett+=tp*tp;
            n=n/10;
        }
        return rett;
    }
};