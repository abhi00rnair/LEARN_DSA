class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>rett;
        rett.push_back(words[0]);
        string prev=words[0];
        sort(prev.begin(), prev.end());
        for(int i=1;i<words.size();i++){
            string curr=words[i];
            sort(curr.begin(), curr.end());
            if(curr!=prev){
                rett.push_back(words[i]);
                prev=curr;
            }
        }
        return rett;
    }
};