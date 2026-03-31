class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        if(n!=m){
            return false;
        }
        int i=0,j=0;
        while(i<n){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }else{
                int ind1=i+2;
                int ind2=j+2;
                int flag=0;
                if(ind1<n && s1[ind1]==s2[j]){
                    swap(s1[i],s1[ind1]);
                    flag=1;
                }else if(ind2<m && s2[ind2]==s1[i]){
                    swap(s2[ind2],s2[j]);
                    flag=1;
                }
                if(flag==0){
                    return false;
                }else{
                    i++;
                    j++;
                }
            }
        }
        return true;
    }
};