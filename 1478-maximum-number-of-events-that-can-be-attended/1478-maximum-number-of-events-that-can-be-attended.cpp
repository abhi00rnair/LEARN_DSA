class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=events.size(), day=1;
        int index=0;
        int rett=0;

        while(!pq.empty() || index<n){
            while(index<n && events[index][0]<=day){
                pq.push(events[index][1]);
                index++;
            }
            while(!pq.empty() && pq.top()<day){
                pq.pop();
            }

            if(!pq.empty()){
                pq.pop();
                rett++;
            }
            day++;
        }
        return rett;
    }
};