class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1 || n<=numRows){
            return s;
        }
        int ss=min(n,numRows);
        vector<string>rett(ss);
        int currow=0;
        bool direc=false;
        for(char ch:s){
            rett[currow]+=ch;
            if(currow==0 || currow==numRows-1){
                direc=!direc;
            }
            if(direc==true){
                    currow+=1;
                }else{
                    currow+=-1;
            }
        }
        string rettt;
        for(string ss:rett){
            rettt+=ss;
        }
        return rettt;
    }
};