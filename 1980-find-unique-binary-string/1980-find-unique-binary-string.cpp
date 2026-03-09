class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int bits=nums[0].size();
        unordered_map<string,int>mp;
        for(string s:nums){
            mp[s]++;
        }
        return func("",mp,bits);
    }

    string func(string s, unordered_map<string,int>mp, int n){
        if(s.size()==n){
            if(mp.find(s)==mp.end()){
                return s;
            }
            return "";
        }
        string str1=func(s+'0',mp,n);
        if(str1!=""){
            return str1;
        }
        string str2=func(s+'1',mp,n);
        return str2;

    }
};