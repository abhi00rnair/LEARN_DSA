class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int m=haystack.size();
        int last=0;
        int ret=-1;
        for(int i=0;i<m;i++){
            if(haystack[i]==needle[0]){
                string temp=haystack.substr(i,i+(n-i));
                if(temp==needle){
                    ret=i;
                    return ret;
                }
            }
        }
        return ret;
    }
};