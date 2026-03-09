class Solution {
public:
    bool checkOnesSegment(string s) {
        int count=0,i=0,n=s.size();
        while(i<n){
            if(s[i]=='1'){
                count++;
                while(i<n && s[i]=='1'){
                    i++;
                }
            }
            else{
                i++;
            }
            if(count>1){
                return false;
            }
        }
        return true;
    }
};