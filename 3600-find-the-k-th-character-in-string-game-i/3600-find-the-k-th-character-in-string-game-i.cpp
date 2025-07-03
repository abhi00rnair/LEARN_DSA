class Solution {
public:
    char kthCharacter(int k) {
        string rett="a";
        while(rett.size()<k){
            int n=rett.size();
            for(int i=0;i<n;i++){
                if(rett[i]=='z'){
                    rett=rett+'a';
                }else{
                rett=rett+char(rett[i]+1);
                }
            }
        }
        return rett[k-1];
    }
};