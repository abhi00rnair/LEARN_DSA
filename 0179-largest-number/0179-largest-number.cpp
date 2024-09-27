class Solution {
public:
    static bool comfunc(string&a,string&b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>temparr;
        for(int i=0;i<nums.size();i++){
            temparr.push_back(to_string(nums[i]));
        }
        sort(temparr.begin(),temparr.end(),comfunc);
        if(temparr[0]=="0"){
            return "0";
        }
        string ret;
        for(int i=0;i<temparr.size();i++){
        ret+=temparr[i];
    }
    return ret;
    }
};