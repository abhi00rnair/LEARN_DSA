class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int tp1=0;
        int tp2=0;
        for(int i=2;i<=n;i++){
            int temp=min(tp1+cost[i-1],tp2+cost[i-2]);
            tp2=tp1;
            tp1=temp;
        }
        return tp1;

    }
};