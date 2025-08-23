class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>st;
        sort(nums.begin(), nums.end());
        do{
            st.insert(nums);
        }while(next_permutation(nums.begin(), nums.end()));
        vector<vector<int>>rett;
        for(auto it: st){
            rett.push_back(it);
        }
        return rett;
    }
};