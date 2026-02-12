class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size(),rett=1;
        for(int i=0;i<n;i++){
            vector<int>count(26,0);
            for(int j=i;j<n;j++){
                count[s[j]-'a']++;
                int common=-1;
                bool ok=true;
                for(int k=0;k<26;k++){
                    if(common==-1 && count[k]>0){
                        common=count[k];
                    }else if(count[k]!=common && count[k]>0){
                        ok=false;
                        break;
                    }
                }
                if(ok){
                    rett=max(rett,j-i+1);
                }
            }
        }
        return rett;
    }
};