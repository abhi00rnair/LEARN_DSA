
class Solution {
public:
    int minAddToMakeValid(string s) {
        int additional = 0; 
        int open = 0;
        for (char c : s) {
            if (c == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--; 
                } else {
                    additional++;
                }
            }
        }
        return open+additional;
    }
};
