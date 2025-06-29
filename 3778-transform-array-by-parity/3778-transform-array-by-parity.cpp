class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        int zero=0,one=0;
        for(auto it:nums){
            if(it%2==0){
                zero++;
            }else{
                one++;
            }
        }
        vector<int>rett;
        rett.insert(rett.begin(),zero,0);
        rett.insert(rett.begin()+zero,one,1);
        return rett;
    }
};