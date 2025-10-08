class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        sort(potions.begin(), potions.end());
        vector<int>rett;
        for(int i=0;i<n;i++){
            int temp=m;
            int left=0;
            int right=m-1;
            while(left<=right){
                int mid=(left+right)/2;
                long long curr=(long long)potions[mid]*spells[i];
                if(curr>=success){
                    temp=mid;
                    right=mid-1;
                }else{
                    left=mid+1;
                }
            }
            rett.push_back(m-temp);
        }
        return rett;
    }
};