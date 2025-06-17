class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp=x;
        long long rett=0;
        while(temp!=0){
            int tp=temp%10;
            rett=rett*10+tp;
            temp=temp/10;
        }
        if(rett==x){
            return true;
        }return false;

        
    }
};