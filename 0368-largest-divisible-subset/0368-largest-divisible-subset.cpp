class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<int>index(n, 1);
        vector<int>prev(n, -1);
        prev[0]=0;
        int maxindex=0;
        int maxxi=INT_MIN;
        for(int i=1;i<n;i++){
            prev[i]=i;
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){
                    int tp=index[j]+1;
                    if(index[i]<tp){
                        index[i]=tp;
                        prev[i]=j;
                    }
                }
            }
            if(maxxi<index[i]){
                maxindex=i;
                maxxi=index[i];
            }
        }
        vector<int>rett;
        while(prev[maxindex]!=maxindex){   
            rett.push_back(nums[maxindex]);
            maxindex=prev[maxindex];
        }
        rett.push_back(nums[maxindex]);
        return rett;
    }
};