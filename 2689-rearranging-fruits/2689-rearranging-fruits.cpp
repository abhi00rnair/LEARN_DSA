class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>mp1;
        int minn=INT_MAX;
        for(int it:basket1){
            mp1[it]++;
            minn=min(it, minn);
        }
        for(int it:basket2){
            mp1[it]--;
            minn=min(it,minn);
        }
        vector<int>temp;
        for(auto it: mp1){
            int fruit=it.first;
            int count=it.second;
            if((count%2)!=0){
                return -1;
            }
            for(int i=0;i<abs(count)/2;i++){
                    temp.push_back(fruit);
            }
        }
        sort(temp.begin(), temp.end());
        long long cost=0;
        for(int i=0;i<temp.size()/2;i++){
            cost+=min(2*minn,temp[i]);
        }
        return cost;


    }
};