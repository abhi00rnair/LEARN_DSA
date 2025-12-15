class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long rett=1;
        int n=prices.size();
        long long len=1;

        for(int i=1;i<n;i++){
            if(prices[i]==prices[i-1]-1){
                len++;
            }else{
                len=1;
            }
            rett+=len;
        }
        return rett;
    }
};