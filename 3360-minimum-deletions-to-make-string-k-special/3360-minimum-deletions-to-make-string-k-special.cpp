class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char, int>mp;
        for(int i=0;i<word.size(); i++){
            mp[word[i]]++;
        }      
        vector<int>freq;
        for(auto it:mp){
            freq.push_back(it.second);
        }
        sort(freq.begin(), freq.end());
        int rett=1e9,n=freq.size();
        for(int i=0;i<n;i++){
            int base=freq[i];
            int delet=0;
            for(auto it:freq){
                if(it>base+k){
                    delet+=it-(base+k);
                }else if(it<base){
                    delet+=it;
                }
            }
            rett=min(rett,delet);
        }
        return rett;
    }
    
};