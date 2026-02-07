class Solution {
public:
    int minimumDeletions(string s) {
        int ret=0;
        int noofb=0;
        for(char c:s){
            if(c=='b'){
                noofb++;
            }else{
                ret=min(ret+1,noofb);
            }
        }
        return ret;
    }
};