class Solution {
public:
    int tribonacci(int n) {
        if(n<=1){
            return n;
        }if(n==2){
            return 1;
        }
        int tp1=0,tp2=1,tp3=1;
        for(int i=3;i<=n;i++){
            int temp=tp1+tp2+tp3;
            tp1=tp2;
            tp2=tp3;
            tp3=temp;
        }
        return tp3;
    }
};