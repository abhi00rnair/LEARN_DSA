class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>rett;
        unordered_set<int>prev;

        for(int it:arr){
            unordered_set<int>curr;
            curr.insert(it);
            for(int it1:prev){
                curr.insert(it1|it);
            }
            prev=curr;
            for(int it2:prev){
                rett.insert(it2);
            }
        }
        return rett.size();
    }
};