class Solution {
public:
    string longestPrefix(string s) {
        int n=s.length();
        vector<int>prefixarr(n,0);
        int j=0;
        for(int i=1;i<n;i++){
            while(j>0 && s[i]!=s[j]){
                j=prefixarr[j-1];
            }
            if(s[i]==s[j]){
                j++;
            }
           prefixarr[i]=j;
        }
        return s.substr(0,prefixarr[n-1]);
    }
};