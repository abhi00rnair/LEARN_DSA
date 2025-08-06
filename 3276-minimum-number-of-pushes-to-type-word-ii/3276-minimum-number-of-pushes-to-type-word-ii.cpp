class Solution {
public:
    int minimumPushes(string word) {
        map<char, int>mp;
        for(char ch: word){
            mp[ch]++;
        }
        vector<pair<char,int>>tp(mp.begin(), mp.end());
        sort(tp.begin(), tp.end(), [] (const pair<char,int>&a ,const pair<char,int>&b){
            return a.second>b.second;
        });
        int count=1;
        int rett=0;
        int no=1;
        for(int i=0;i<tp.size();i++){
            if(no>8){
                count++;
                no=1;
            }
            no++;
            int temp=tp[i].second*count;
            rett+=temp;
        }
        return rett;
    }
};