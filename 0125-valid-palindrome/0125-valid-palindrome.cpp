class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(auto ch:s){
            if(isalnum(ch)){
                temp+=tolower(ch);
            }
        }
        int left=0,right=temp.size()-1;
        if(right==left){
            return true;
        }
        while(left<=right){
            if(temp[left]!=temp[right]){
                return false;
            }left++;
            right--;
        }
        return true;

    }
};