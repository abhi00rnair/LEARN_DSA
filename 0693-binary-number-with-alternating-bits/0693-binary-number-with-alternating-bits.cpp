class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n==1 || n==2){
            return true;
        }
        if(n==3){
            return false;
        }
        string str;
        while(n>1){
            string mod=to_string(n%2);
            n=n/2;
            str+=mod;
        }
        str+='1';
        for(int i=1;i<str.size()-1;i++){
            if(str[i]==str[i-1] || str[i]==str[i+1]){
                return false;
            }
        }
        return true;
    }
};