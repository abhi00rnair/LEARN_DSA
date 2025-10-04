class Solution {
public:
    int maxDepth(string s) {
        int rett=0;
        int open=0, closed=0;
        for(char ch:s){
            if(ch=='('){open++;}
            if(ch==')'){closed++;}
            rett=max(rett, open-closed);
        }
        return rett;

    }
};