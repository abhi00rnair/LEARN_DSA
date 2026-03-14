class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string>arr;
        vector<char>ch={'a','b','c'};
        string str;
        func('d',n,str,arr,ch);
        sort(arr.begin(),arr.end());
        if(arr.size()<k){
            return {};
        }
        return arr[k-1];
    }

    void func(char prev,int n, string&str,vector<string>&arr,vector<char>&ch){
        if(str.size()==n){
            arr.push_back(str);
            return;
        }
        for(char c:ch){
            if(c!=prev){
                str.push_back(c);
                func(c,n,str,arr,ch);
                str.pop_back();
            }
        }
    }

};