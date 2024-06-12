#include <string>

class Solution {
public:
    int minAddToMakeValid(std::string s) {
        int additional = 0; // Counter for additional parentheses needed
        int open = 0;       // Counter for open parentheses
        for (char c : s) {
            if (c == '(') {
                open++; // Increment for open parenthesis
            } else {
                if (open > 0) {
                    open--; // Match with an open parenthesis
                } else {
                    additional++; // No open parenthesis to match, need an additional one
                }
            }
        }
        return open + additional; // Return the sum of remaining open parentheses and additional needed
    }
};
