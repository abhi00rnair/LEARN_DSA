class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n1=difficulty.size();
        int n2=worker.size();
        int i=0,j=0,rett=0;
        // i is worker index,j=diff index
        while(i<n2){
            int maxprofit=0;
            int j=0;
            while(j<n1){
                if(worker[i]>=difficulty[j]){
                maxprofit=max(profit[j],maxprofit);
                }
                j++;
            }
            rett+=maxprofit;
            i++;
        }
        return rett;
    }
};