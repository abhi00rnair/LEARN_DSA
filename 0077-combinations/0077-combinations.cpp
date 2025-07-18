class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>rett;
        vector<int>temp;
        func(n,k,1,temp,rett);
        return rett;
    }
    void func(int n, int k, int i, vector<int>&temp, vector<vector<int>>&rett){
        if(temp.size()==k){
            rett.push_back(temp);
            return;
        }
        if(i>n){
            return;
        }
        temp.push_back(i);
        func(n,k,i+1,temp,rett);
        temp.pop_back();
        func(n,k,i+1,temp,rett);
    }
};