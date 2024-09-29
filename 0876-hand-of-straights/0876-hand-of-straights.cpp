class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        for(int i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            int start = it->first;
            int count = mp[start];

            if (count > 0) {
                for (int i = 0; i < groupSize; i++) {
                    if (mp[start + i] < count) {
                        return false; 
                    }
                    mp[start + i] -= count;
                }
            }
        }
        return true;
    }
};