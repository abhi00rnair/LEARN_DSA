class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>rett;
        int n=nums1.size();
        unordered_set<int>st;
        for(int it:nums1){
            st.insert(it);
        }
        unordered_set<int>st1;
        for(int it:nums2){
            if(st.count(it)){
                st1.insert(it);
            }
        }
        for(auto it:st1){
            rett.push_back(it);
        }
        return rett;
    }
};