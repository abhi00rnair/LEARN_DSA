class Solution {
public:
    vector<vector<string>> partition(string s) {
       vector<vector<string>>ret;
        vector<string>temp;
        func(s,ret,temp,0);
        return ret;
    }
    
    void func(string s,vector<vector<string>>&ret,vector<string>&temp,int index){
        if(index==s.size()){
            ret.push_back(temp);
            return;
        }
        
        for(int i=index;i<s.size();i++){
            if(palindrome(s,index,i)){
            temp.push_back(s.substr(index,i-index+1));
            func(s,ret,temp,i+1);
            temp.pop_back();
        }
      }
    }
    bool palindrome(string s, int strt, int end){
        while(strt<=end){
            if(s[strt]!=s[end]){
                return false;
            }
            strt++;
            end--;
        }
        return true;
    }
    
};