class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int count1=0;
        string str=s;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                count1++;
                if(s[i]=='0'){
                    s[i]='1';
                }else{
                    s[i]='0';
                }
            }
        }
        int count2=1;
        if(str[0]=='0'){
            str[0]='1';
        }else{
            str[0]='0';
        }
        for(int i=1;i<n;i++){
            if(str[i]==str[i-1]){
                count2++;
                if(str[i]=='0'){
                    str[i]='1';
                }else{
                    str[i]='0';
                }
            }
        }
        return min(count1,count2);
    }
};