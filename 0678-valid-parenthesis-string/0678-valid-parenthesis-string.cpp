class Solution {
public:
    bool checkValidString(string s) {
        int minn=0,maxx=0,n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){minn++;maxx++;}
            else if(s[i]==')'){minn--;maxx--;}
            else {
                minn--;
                maxx++;
            }
            if(minn<0){minn=0;}
            if(maxx<0){return false;}
        }
        if(minn>0){
            return false;
        }return true;
    }
};