class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev=0,curr=1;
        int rett=0;
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                curr++;
            }else{
                rett+=min(prev,curr);
                prev=curr;
                curr=1;
            }
        }
        rett+=min(prev,curr);
        return rett;
    }
};