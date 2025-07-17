class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>mp;
        int rett=1e9;
        for(int i=0;i<cards.size();i++){
            if(mp.find(cards[i])!=mp.end()){
                int lastindex=mp[cards[i]];
                rett=min(rett,i-lastindex+1);
            }
            mp[cards[i]]=i;
        }
        return rett==1e9 ? -1 : rett;
    }
};