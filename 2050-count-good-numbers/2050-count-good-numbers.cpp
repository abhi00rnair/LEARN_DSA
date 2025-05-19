class Solution {
public:
    int countGoodNumbers(long long n) {
        long long evenpos=(n+1)/2;
        long long oddpos=n/2;
        long long modd=1e9+7;
        long long evensum=func(5,evenpos, modd);
        long long oddsum=func(4,oddpos, modd);
        return (int)((evensum*oddsum)%modd);

    }

    long long func(long long x, long long n, long long modd ){
        long long rett=1;
        while(n>0){
            if(n%2==1){
                rett=(rett*x)%modd;
                n--;
            }else{
                x=(x*x)%modd;
                n/=2;
            }
        }
        return rett;
    }
};