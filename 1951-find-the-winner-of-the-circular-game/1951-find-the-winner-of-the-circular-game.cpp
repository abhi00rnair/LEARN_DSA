class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        int count=0;
        while(nums.size()>1){
            count=(count+k-1)%nums.size();
            nums.erase(nums.begin()+count);
        }
        return nums[0];
    }
};