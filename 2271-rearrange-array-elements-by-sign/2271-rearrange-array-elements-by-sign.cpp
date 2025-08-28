class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        int index2=1;

        vector<int>rett(n);
        for(int it:nums){
            if(it>0){
                rett[index]=it;
                index+=2;
            }else{
                rett[index2]=it;
                index2+=2;
            }
        }
        return rett;

    }
};