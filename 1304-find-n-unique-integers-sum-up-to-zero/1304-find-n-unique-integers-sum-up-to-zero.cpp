class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>rett;
        for(int i=1;i<=n/2;i++){
            rett.push_back(i);
        }
        for(int i=-1;i>=-n/2;i--){
            rett.push_back(i);
        }
        if(n%2!=0){
            rett.push_back(0);
        }
        return rett;
    }
};