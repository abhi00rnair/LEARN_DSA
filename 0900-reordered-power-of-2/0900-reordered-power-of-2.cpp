class Solution {
public:
    bool reorderedPowerOf2(int n) {
        unordered_set<string>st;
         for(int i=0;i<31;i++){
            int tp=1<<i;
            string ss=to_string(tp);
            sort(ss.begin(), ss.end());
            st.insert(ss);
        }
        string finder=to_string(n);
        sort(finder.begin(), finder.end());
        return st.count(finder);
    }
};