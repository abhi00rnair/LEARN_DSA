class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        unordered_set<long long>st;
        st.insert(1);
        long long tp=1;
        for(int i=1;i<30;i++){
            tp*=3;
            st.insert(tp);
        }
        return st.count(n);

    }
};