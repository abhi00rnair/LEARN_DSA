class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>temp;
        for(int i:arr){
            if(temp.count(i*2) ||  (i%2==0 && temp.count(i/2))){
                return true;
            }
            temp.insert(i);
        }
        return false;
    }
};