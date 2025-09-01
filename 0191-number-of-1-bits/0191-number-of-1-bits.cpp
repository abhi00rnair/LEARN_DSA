class Solution {
public:
    int hammingWeight(int n) {
        int rett=0;
        int bits=log2(n)+1;
        for(int i=0;i<bits;i++){
            if(n&(1<<i)){
                rett++;
            }
        }
        return rett;
    }
};