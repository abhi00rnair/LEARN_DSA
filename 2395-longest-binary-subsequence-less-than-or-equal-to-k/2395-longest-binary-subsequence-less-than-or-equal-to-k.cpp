class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n=s.size();
        int i=n-1;
        int temp=0;
        int multi=0;
        while(i>=0){
            if(s[i]!='0'){
                double tp=pow(2,multi);
                if(temp+tp>k){
                    break;
                }
                temp+=tp;
            }
            multi++;
            i--;
        }
        int removed=0;
        while(i>=0){
            if(s[i]=='1'){
                removed++;
            }
            i--;
        }
        return n-removed;

    }
};