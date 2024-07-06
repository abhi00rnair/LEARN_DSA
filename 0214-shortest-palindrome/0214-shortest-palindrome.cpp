class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        int i = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (isPalindrome(s, 0, j)) {
                i = j + 1; 
                break;
            }
        }
       
        string prefix = s.substr(i);
        reverse(prefix.begin(), prefix.end());
                return prefix + s; 
    }
    bool isPalindrome(string& s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};