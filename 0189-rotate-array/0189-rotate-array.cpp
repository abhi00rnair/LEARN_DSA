class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int ke;
        if(k>n){
        ke=k%n;
        }else{
            ke=k;
        }
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+ke);
        reverse(nums.begin()+ke,nums.end());
        
    }
};