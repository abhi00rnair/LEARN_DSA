class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=prices[0];
        int maxx=0;
        for(int i=0;i<prices.size();i++){
            int profit=prices[i]-minn;
            maxx=max(profit,maxx);
            minn=min(prices[i],minn);
        }
        return maxx;
    }
};