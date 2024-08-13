class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int i=n-1;
        while(i>=0){
            int tp=num[i]-'0';
            if(tp%2!=0){
                return num.substr(0,i+1);
            }
            i--;
        }
        return "";
    }
};