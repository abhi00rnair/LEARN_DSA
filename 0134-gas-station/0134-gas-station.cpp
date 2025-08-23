class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int sum_gas=accumulate(gas.begin(), gas.end(), 0);
        int sum_cost=accumulate(cost.begin(), cost.end(), 0);
        if(sum_gas<sum_cost){
            return -1;
        }

        int startindex=0;
        int currgas=0;
        for(int i=0;i<n;i++){
            currgas+=gas[i]-cost[i];
            if(currgas<0){
                startindex=i+1;
                currgas=0;
            }
        }
        return startindex;
    }
};