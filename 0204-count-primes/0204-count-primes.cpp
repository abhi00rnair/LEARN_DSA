class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        vector<int>prime(n,true);
        prime[0]=prime[1]=false;
        for(int i=2;i*i<n;i++){
            if(prime[i]){
                for(int j=i*i;j<n;j+=i){
                    if(prime[j]){
                        prime[j]=false;
                    }
                }
            }
        }
        int rett=0;
        for(int i=0;i<n;i++){
            if(prime[i]){
                rett++;
            }
        }
        return rett;
    }
};