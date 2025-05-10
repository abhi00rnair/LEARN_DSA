class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int rett=0;
        int left=0, right=0,nn=trainers.size(), n=players.size();
        while(left<n && right<nn){
            if(players[left]<=trainers[right]){
                rett++;
                left++;
                right++;
            }else{
                right++;
            }
        }
        return rett;
    }
};