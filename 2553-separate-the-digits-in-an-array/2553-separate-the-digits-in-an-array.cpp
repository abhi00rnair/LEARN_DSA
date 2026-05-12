class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>rett;
        for(int it:nums){
            int tp=it;
            vector<int>temp;
            while(tp){
                temp.push_back(tp%10);
                tp=tp/10;
            }
            reverse(temp.begin(), temp.end());
            rett.insert(rett.end(),temp.begin(), temp.end());
        }
        return rett;
    }
};