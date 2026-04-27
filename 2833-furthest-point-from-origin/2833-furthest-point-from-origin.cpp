class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count1=0,count2=0;
        for(char ch:moves){
            if(ch=='L'){
                count1++;
            }else if(ch=='R'){
                count2++;
            }
        }
        char ch=' ';
        if(count1>count2){
            ch='L';
        }else{
            ch='R';
        }
        int rett=0;
        for(char chh:moves){
            if(chh=='_'){
                chh=ch;
            }
            if(chh=='L'){
                rett--;
            }else if(chh=='R'){
                rett++;
            }
        }
        return abs(rett);
    }
};