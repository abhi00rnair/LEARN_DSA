class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
        vector<int>rett;
        vector<int>keyy;
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                keyy.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<keyy.size();j++){
                if(abs(i-keyy[j])<=k){
                    rett.push_back(i);
                    break;
                }
            }
        }
        return rett;
    }
};