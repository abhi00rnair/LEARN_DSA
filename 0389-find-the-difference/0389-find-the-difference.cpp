class Solution {
public:
    char findTheDifference(string s, string t) {
        char res=0;
        for(char ch:t){
            res^=ch;
        }
        for(char ch:s){
            res^=ch;
        }
        return res;
    }
};