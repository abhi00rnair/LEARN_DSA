class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int rett=numBottles;
        int empty=numBottles;
        while(empty>=numExchange){
            int temp=empty/numExchange;
            rett+=temp;
            empty=(empty%numExchange)+temp;
        }
        return rett;
    }
};