class Solution {
public:
    int smallestNumber(int n) {
        int start=n+1;
        if(n==1){
            return 1;
        }
        while((start&start-1)!=0){
            start++;
        }
        return start-1;
        
    }
};