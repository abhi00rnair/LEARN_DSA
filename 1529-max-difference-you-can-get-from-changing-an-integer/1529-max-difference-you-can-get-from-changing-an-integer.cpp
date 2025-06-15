class Solution {
public:
    int maxDiff(int num) {
        string nummax=to_string(num);
        string nummin=to_string(num);
        char nine;
        for(auto ch:nummax){
            if(ch!='9'){
                nine=ch;
                break;
            }
        }
        int n=nummax.size();
        for(int i=0;i<n;i++){
            if(nummax[i]==nine){
                nummax[i]='9';
            }
        }
        int maxx=stoi(nummax);

        char flag='0';
        char ch='0';
        if(nummin[0]!='1'){
            flag='1';
            ch=nummin[0];
        }else{
            int i=1;
            while(i<n){
                if(nummin[i]!='0' && nummin[i]!='1'){
                    ch=nummin[i];
                    break;
                }
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(nummin[i]==ch){
                nummin[i]=flag;
            }
        }

        int minn=stoi(nummin);
        return maxx-minn;
    }
};