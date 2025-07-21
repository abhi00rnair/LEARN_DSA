class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size();
        int i=0;
        string rett;
        for(int i=0;i<n;i++){
            int temp=rett.size();
            if(temp>=2 &&rett[temp-1]==s[i] && rett[temp-2]==s[i]){
                continue;
            }
            rett.push_back(s[i]);
        }
        return rett;
    }
};