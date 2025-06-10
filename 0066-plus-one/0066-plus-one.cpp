class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        int flag=0;
        while(i>=0){
            if(digits[i]+1<=9){
                digits[i]=digits[i]+1;
                flag=1;
                break;
            }else{
                digits[i]=0;
                i=i-1;
            }
        }
        if(flag==1){return digits;}
        digits.insert(digits.begin()+0,1);
        return digits;
        
    }
};