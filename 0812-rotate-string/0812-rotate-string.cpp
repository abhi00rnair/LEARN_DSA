class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return true;
        }
        for(int i=0;i<s.size();i++){
            char temp=s[0];
            s.erase(0,1);
            s.push_back(temp);
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};