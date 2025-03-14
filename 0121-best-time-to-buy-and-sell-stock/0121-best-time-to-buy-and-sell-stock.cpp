class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=prices[0];
        int maxi=0;
        for(int i=0;i<prices.size();i++){
            int profit=prices[i]-minn;
            maxi=max(profit,maxi);
            minn=min(prices[i],minn);
        }
        return maxi;
    }
};