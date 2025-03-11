class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int a=-1,b=-1,c=-1;
        int count=0;

        for(int right=0;right<n;right++){
            if(s[right]=='a'){
                a=right;
            }if(s[right]=='b'){
                b=right;
            }if(s[right]=='c'){
                c=right;
            }
            if(a!=-1 && b!=-1 && c!=-1){
                int minn =min(a,b);
                int minnn=min(minn,c);
                count+=(minnn+1);
            }
        }
        return count;
    }
};