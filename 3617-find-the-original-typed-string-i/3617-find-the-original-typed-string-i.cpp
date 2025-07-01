class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.size();
        int i=0;
        int rett=0;
        while(i<n-1){
            if(word[i]==word[i+1]){
                rett++;
            }
            i++;
        }
        if(rett>0){
            return rett+1;
        }return 1;
    }
};