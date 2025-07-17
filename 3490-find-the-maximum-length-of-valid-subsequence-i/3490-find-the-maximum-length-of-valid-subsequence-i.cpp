class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int odd=0,even=0,prev=1,other=0,i=0,prev1=0,other1=0;
        while(i<nums.size()){
            if(nums[i]%2==0){
                even++;
                if(prev1==0){
                    other1++;
                    prev1=1;
                }
                if(prev==0){
                    other++;
                    prev=1;
                }
            }else{
                odd++;
                if(prev1==1){
                    other1++;
                    prev1=0;
                }
                if(prev==1){
                    other++;
                    prev=0;
                }
            }
            i++;
        }
        return max({odd,even,other,other1});
    }
};