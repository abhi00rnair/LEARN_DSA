class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int tp1=0;
        int tp2=1;
        for(int i=2;i<=n;i++){
            int temp=tp1+tp2;
            tp1=tp2;
            tp2=temp;
        }
        return tp2;
        
    }

};