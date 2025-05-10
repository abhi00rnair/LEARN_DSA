class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int nooffive=0;
        int nooften=0;
        int n=bills.size();
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                nooffive++;
            }else if(bills[i]==10){
                nooften++;
                if(nooffive<1){
                    return false;
                }
                nooffive--;
            }else if(bills[i]==20){
                if(nooften>0 && nooffive>0){
                    nooften--;
                    nooffive--;
                }else if(nooffive>=3){
                    nooffive-=3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};