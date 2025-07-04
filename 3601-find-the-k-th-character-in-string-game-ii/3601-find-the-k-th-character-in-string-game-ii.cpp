class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        int level=0;
        while((1LL<<level)<k){
            level++;
        }
        int n=operations.size();
        long long start=k-1;
        int shift=0;

        while(level>0){
            long long previndex=1LL<<(level-1);
            if(start>=previndex){
                start-=previndex;
                if(operations[level-1]==1){
                    shift++;
                }
            }
            level--;
        }
        return 'a'+(shift%26);
    }
};