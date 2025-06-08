class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>rett;
        for(int i=1;i<=9;i++){
            func(rett,n,i);
        }
        return rett;
    }

    void func(vector<int>&rett,int n ,int i){
        if(i>n){
            return;
        }
        rett.push_back(i);
        for(int j=0;j<=9;j++){
            func(rett,n,i*10+j);
        }
    }
};