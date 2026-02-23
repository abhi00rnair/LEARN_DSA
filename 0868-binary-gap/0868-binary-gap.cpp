class Solution {
public:
    int binaryGap(int n) {
        string str=func(n);
        int m=str.size();
        int rett=0;
        int prev=0;
        for(int i=0;i<m;i++){
            if(str[i]=='1'){
                rett=max(rett,i-prev);
                prev=i;
            }
        }
        return rett;
    }

    string func(int n){
        string rett;
        while(n){
            rett+=to_string(n%2);
            n=n/2;
        }
        reverse(rett.begin(), rett.end());
        return rett;
    }
};