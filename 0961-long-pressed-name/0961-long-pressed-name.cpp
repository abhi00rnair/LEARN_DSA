class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n1=name.size(),n2=typed.size();
        int i=0,j=0;
        while(j<n2){
            if(i<n1 && name[i]==typed[j]){
                i++;
                j++;
            }else if(j>0 && typed[j]==typed[j-1]){
                j++;
            }else{
                return false;
            }
        }
        if(i==n1){
        return true;
        }return false;
    }
};