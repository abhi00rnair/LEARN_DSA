class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;

        while(left<right){
            while(left<right && !isalnum(s[left])){
                left++;
            }while(left<right && !isalnum(s[right])){
                right--;
            }
            char aa=tolower(s[left]);
            char bb= tolower(s[right]);
            if(aa!=bb){
                return false;
            }
            left++;
            right--;
        }
        return true;
        
    }
};