class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        unordered_set<char>st={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left=0;
        int right=n-1;
        while(left<right){
            while(left<right && st.find(s[left])==st.end()){
                left++;
            }
            while(right>left && st.find(s[right])==st.end()){
                right--;
            }
            if(left<right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};