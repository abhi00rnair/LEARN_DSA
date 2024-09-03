class Solution {
public:
    int getLucky(string s, int k) {
        int n=s.length();
        string ss;
        for(int i=0;i<n;i++){
            int n=s[i]-'a'+1;
            string tp=to_string(n);
            ss+=tp;
        }
        int ret=0;
        for(char c:ss){
            ret+=c-'0';
        }
        for(int i=1;i<k;i++){
            int temp=ret;
            ret=0;
            while(temp>0){
                ret+=(temp%10);
                temp=temp/10;
            }
        }
        return ret;
    }
};