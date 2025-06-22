class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>rett;
        int n=s.size(),i=0;
        while(i<n){
            int tr=i;
            if(tr+(k-1)<n){
                string temp=s.substr(i,k);
                rett.push_back(temp);
                i+=k;
            }else{
                break;
            }
        }
        if(i<n){
        int tp=k-(n-i);
        string temp=s.substr(i,n-i);
        while(tp!=0){
            temp+=fill;
            tp--;
        }
        rett.push_back(temp);
        }
        return rett;
    }
};