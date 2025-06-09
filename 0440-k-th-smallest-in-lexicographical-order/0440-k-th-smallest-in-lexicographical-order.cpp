class Solution {
public:
    int findKthNumber(int n, int k) {
        int curr=1;
        k=k-1;
        while(k>0){
            long long steps=func(curr,curr+1,n);
            if(steps<=k){
                k=k-steps;
                curr++;
            }else{
                curr*=10;
                k=k-1;
            }
        }
        return curr;
        
    }
    long long func(long long  curr, long long curr2, int n){
        int rett=0;
        while(curr<=n){
            rett+=min((long long) n+1,curr2)-curr;
            curr*=10;
            curr2*=10;
        }
        return rett;
    }
};