class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>rett;
        string temp="";
        func(0,0,rett,temp,n);
        return rett;
    }
    void func(int open, int close, vector<string>&rett,string&temp, int n){
        if(temp.size()==2*n){
            rett.push_back(temp);
            return;
        }
        if(open<n){
            temp=temp+'(';
            func(open+1,close,rett,temp,n);
            temp.erase(temp.begin()+temp.size()-1);
        }
        if(open>close){
            temp=temp+')';
            func(open,close+1,rett,temp,n);
            temp.erase(temp.begin()+temp.size()-1);
        }
    }
};