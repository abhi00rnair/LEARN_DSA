class Solution {
public:
    int minMaxDifference(int num) {
        string nums9=to_string(num);
        string nums0=to_string(num);
        int n=nums9.length();
        int index9=-1,index0=-1;
        for(int i=0;i<n;i++){
            if(nums9[i]!='9' && index9==-1){
                index9=i;
            }if(nums9[i]!='0' && index0==-1){
                index0=i;
            }
        }
        if(index9!=-1){
            char nine=nums9[index9];
            for(char &ch:nums9){
                if(ch ==nine){
                    ch='9';
                }
            }
        }
        if(index0!=-1){
            char zero=nums0[index0];
            for(char &ch: nums0){
                if(ch==zero){
                    ch='0';
                }
            }
        }
        int maxx=stoi(nums9);
        int minn=stoi(nums0);
        return maxx-minn;
    }
};