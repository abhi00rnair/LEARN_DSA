class Solution {
public:
    bool digitCount(string num) {
        map<int,int>mp;
        insertmap(num,mp);
        return checkfun(mp,num);
        
    }
    void insertmap(string nums, map<int,int>&mp){
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=nums[i]-'0';
            mp[temp]++;
        }
    }
    bool checkfun(map<int, int>mp,string s){
        for(auto it:mp){
            int tp=s[it.first]-'0';
            if(tp==it.second){
                continue;
            }else{
                return false;
            }
        }return true;
    }
};