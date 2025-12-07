class Solution {
public:
    int countOdds(int low, int high) {
        int i=low,rett=0;
        while(i<=high){
            if(i%2!=0){
                rett++;
            }
            i++;
        }
        return rett;
    }
};