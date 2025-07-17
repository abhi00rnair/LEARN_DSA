class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        for(int it:tasks){
            mp[it]++;
        }
        priority_queue<int>pq;
        for(auto it:mp){
            pq.push(it.second);
        }
        int time=0;
        while(!pq.empty()){
            vector<int>temp;
            int round=n+1;
            for(int i=0;i<round && !pq.empty();i++){
                temp.push_back(pq.top()-1);
                pq.pop();
                time++;
            }
            for(int it:temp){
                if(it>0){
                    pq.push(it);
                }
            }
            if(!pq.empty()){
            time=time+(round-temp.size());
            }

        }
        return time;
    }
};