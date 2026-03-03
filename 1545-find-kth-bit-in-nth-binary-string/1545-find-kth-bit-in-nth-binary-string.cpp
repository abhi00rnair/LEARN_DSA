class Solution {
public:
    char findKthBit(int n, int k) {
        string tp="0";
        for(int i=1;i<=n;i++){
            string temp=tp;
            reverse(temp.begin(), temp.end());
            tp=tp+"1";
            int k=temp.size();
            for(int j=0;j<k;j++){
                if(temp[j]=='0'){
                    temp[j]='1';
                }else{
                    temp[j]='0';
                }
            }
            tp=tp+temp;
        }
        int m=tp.size();
        for(int i=0;i<m;i++){
            if(i+1==k){
                return tp[i];
                break;
            }
        }
        return '0';
    }
};