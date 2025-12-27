class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            pq.push(i);
        }
        vector<int>temp(n,0);
        priority_queue<pair<long long,int>,vector<pair<long long,int>>, greater<pair<long long,int>>>pq1;

        for(int i=0;i<meetings.size();i++){
            int start=meetings[i][0];
            int end=meetings[i][1];
            int duration=end-start;

            while(!pq1.empty() && pq1.top().first<=start){
                pq.push(pq1.top().second);
                pq1.pop();
            }
            if(!pq.empty()){
                int roomno=pq.top();
                pq.pop();
                pq1.push({end,roomno});
                temp[roomno]++;
            }else{
                auto [time, roomno]=pq1.top();
                temp[roomno]++;
                pq1.pop();
                pq1.push({duration+time, roomno});
            }
        }
        int rett=0;
        for(int i=0;i<n;i++){
            if(temp[rett]<temp[i]){
                rett=i;
            }
        }
        return rett;
    }
};