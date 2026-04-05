class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0,i=0,n=moves.size();
        while(i<n){
            if(moves[i]=='L'){
                x--;
            }else if(moves[i]=='R'){
                x++;
            }else if(moves[i]=='U'){
                y++;
            }else{
                y--;
            }
            i++;
        }
        if(x==0 && y==0){
            return true;
        }return false;
    }
};