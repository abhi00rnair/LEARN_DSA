class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int rett=0, n=fruits.size();
        vector<int>visited(n, -1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(visited[j]==-1 && fruits[i]<=baskets[j]){
                    visited[j]=0;
                    rett++;
                    break;
                }
            }
        }
        return n-rett;
    }
};