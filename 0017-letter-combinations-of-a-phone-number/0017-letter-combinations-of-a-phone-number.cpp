class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return {};
        }
        map<int,vector<char>>mp;
        mp[2]={'a','b','c'};
        mp[3]={'d','e','f'};
        mp[4]={'g','h','i'};
        mp[5]={'j','k','l'};
        mp[6]={'m','n','o'};
        mp[7]={'p','q','r','s'};
        mp[8]={'t','u','v'};
        mp[9]={'w','x','y','z'};
        vector<string>rett;
        string temp;
        func(digits,0,rett,temp,mp);
        return rett;

    }

    void func(string digits,int i,vector<string>&rett,string temp,map<int,vector<char>>mp){
        if(i>=digits.length()){
            rett.push_back(temp);
            return;
        }
        int num=digits[i]-'0';
        for(char ch : mp[num]){
            temp.push_back(ch);
            func(digits,i+1,rett,temp,mp);
            temp.pop_back();
        }
    }
};