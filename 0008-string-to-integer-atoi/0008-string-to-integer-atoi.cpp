class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        int rett=0;
        while(i<s.size() && s[i]==' ')i++;

        if(i<s.size() && s[i]=='-'){
            sign=-1;
            i++;
        }else if(i<s.size() && s[i]=='+'){
            sign=1;
            i++;
        }

        while(i<s.size() && isdigit(s[i])){
       if (rett > (INT_MAX - (s[i] - '0')) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            rett=rett*10+(s[i]-'0');

           //if(sign*rett>=INT_MAX)return INT_MAX;
           // if(sign*rett<=INT_MIN)return INT_MIN;
            i++;
        }
        return sign *rett;
    }
};