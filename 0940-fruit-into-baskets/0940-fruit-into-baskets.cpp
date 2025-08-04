class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        //sort(fruits.begin(), fruits.end());
        int left=0;
        int maxxi=0;
        unordered_map<int,int>mp;
        for(int right=0;right<fruits.size(); right++){
            while(left<=right && mp.find(fruits[right])==0 && mp.size()==2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            mp[fruits[right]]++;
            maxxi=max(maxxi,(right-left+1));
        }
        return maxxi;
    }
};