class Solution {
public:
    int reverse(int x) {
        long long rett=0;
        int temp=x;
        while(temp!=0){
            int quo=temp/10;
            int rem=temp%10;
            rett=rett*10+rem;
            temp=quo;
        }
        if(rett<INT_MIN || rett>INT_MAX){
            return 0;
        }
        return (int)rett;
    }
};