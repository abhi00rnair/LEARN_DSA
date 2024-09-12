class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>sett(allowed.begin(), allowed.end());
        int count=0;
        for(string &word :words){
            bool tp=true;
            for(char &ch :word){
                if(sett.find(ch)==sett.end()){
                    tp=false;
                    break;
                }
            }
            if(tp){
            count++;
            }
        }
        return count;
    }
};