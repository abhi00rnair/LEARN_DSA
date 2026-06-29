class Solution {
public:
    string processStr(string s) {
        string rett="";
        for (char it:s){
            if (it=='*' ){
                if (!rett.empty()){
                    rett.pop_back();
                }     
            }else if (it=='#'){
                rett=rett+rett;
            }else if (it=='%'){
                reverse(rett.begin(), rett.end());
            }else{
                rett=rett+it;
            }
        }
        return rett;
    }
};