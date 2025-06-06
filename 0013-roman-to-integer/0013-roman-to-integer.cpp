class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int rett=0,i=0,n=s.size();
        while(i<n){
            if(s[i]=='I' && i+1<n){
                    if(s[i+1]=='V'){rett+=4;i=i+2;continue;}
                    else if(s[i+1]=='X'){rett+=9;i=i+2;continue;}
                
            }else if(s[i]=='X' && i+1<n){
                    if(s[i+1]=='L'){rett+=40;i=i+2;continue;}
                    else if(s[i+1]=='C'){rett+=90;i=i+2;continue;}
            }else if(s[i]=='C' && i+1<n){
                    if(s[i+1]=='D'){rett+=400;i=i+2;continue;}
                    else if(s[i+1]=='M'){rett+=900;i=i+2;continue;}
            }
                rett+=mp[s[i]];
                i++;

        }
        return rett;
    }
};