class Solution {
public:
    string largestGoodInteger(string num) {
        int rett=-1e9;
        int n=num.size();
        for(int i=0;i<=n-3;i++){
            if(num[i+1]==num[i] && num[i+2]==num[i]){
                int tp=num[i]-'0';
                rett=max(rett,tp);
            }
        }
        string temp="";
        if(rett!=-1e9){
            string tr=to_string(rett);
            temp=tr+tr+tr;
        }
        return temp;
    }
};