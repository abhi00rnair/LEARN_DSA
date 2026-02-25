class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>rett;
        unordered_map<int,vector<int>>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int count=func(arr[i]);
            mp[count].push_back(arr[i]);
        }
        for(int i=0;i<32;i++){
            if(!mp[i].empty()){
                vector<int>tp=mp[i];
                sort(tp.begin(), tp.end());
                rett.insert(rett.end(),tp.begin(),tp.end());
            }
        }
        return rett;
    }

    int func(int n){
        int rett=0;
        while(n){
            if(n%2==1){
                rett++;
            }
            n=n/2;
        }
        return rett;
    }
};