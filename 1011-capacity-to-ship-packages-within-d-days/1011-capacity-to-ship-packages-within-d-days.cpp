class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        /*int high=0;
        for(int num:weights){
            high+=num;
        }*/
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int mid=(low+high)/2;
            int count=0;
            int tempdays=1;
            for(int num :weights){
                if(count+num>mid){
                    tempdays++;
                    count=0;
                }
                count+=num;
            }
            if(tempdays>days){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
};