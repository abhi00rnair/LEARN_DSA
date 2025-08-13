class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        vector<long long>rett;
        rett.push_back(1);
        long long tp=1;
        for(int i=1;i<30;i++){
            tp*=3;
            rett.push_back(tp);
        }
        for(int i=0;i<rett.size();i++){
            if(rett[i]==n){
                return true;
            }
        }
        return false;

    }
};