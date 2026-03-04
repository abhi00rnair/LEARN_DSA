class Solution {
public:
    bool isMatch(string s, string p) {
        return func(s,p,0,0);
    }

    bool func(string&s, string&p , int i, int j){
        if(j>=p.size()){
            return i==s.size();
        }
        bool match=(i<s.size() && (s[i]==p[j] || p[j]=='.'));
        if(j+1<p.size() && p[j+1]=='*'){
            return func(s,p,i,j+2) || (match &&func(s,p,i+1,j));
        }
        if(match){
            return func(s,p,i+1,j+1);
        }
        return false;
    }
};