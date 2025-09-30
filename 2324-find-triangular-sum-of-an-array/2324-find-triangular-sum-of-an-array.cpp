class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>temp{nums.begin(), nums.end()};
        while(temp.size()!=1){
            int n=temp.size();
            for(int i=0;i<n-1;i++){
                int tp=(temp[i]+temp[i+1])%10;
                temp[i]=tp;
            }
            temp.pop_back();
        }
        return temp[0];
    }
};