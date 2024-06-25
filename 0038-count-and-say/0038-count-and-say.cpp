class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        return rle(countAndSay(n-1));
        
    }
    
    string rle(string s){
        int i=0;
        vector<char>temp;
        while(s[i]!='\0'){
            if(s[i+1]==s[i]){
                int j=i;
                int k=0;
                while(s[j+1]==s[j] && j+1<s.length()){
                    j++;
                    k++;
                }
                string tp=to_string(k+1);
                char tt=tp[0];
                temp.push_back(tt);
                temp.push_back(s[i]);
                i=j;
                i++;
            }
            else{
                string tp=to_string(1);
                char tt=tp[0];
                temp.push_back(tt);
                temp.push_back(s[i]);
                i++;
            }
            
        }
        string ret(temp.begin(),temp.end());
        return ret;
    }
};