class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
         vector<vector<pair<int,int>>>graph(26);
        int n=original.size();
        for(int i=0;i<n;i++){
            int c1=original[i]-'a';
            int c2=changed[i]-'a';
            graph[c1].push_back({c2,cost[i]});
        }
        int m=source.size();
        long long rett=0;
        vector<vector<int>>tp(26,vector<int>(26,1e9));
        for(int i=0;i<26;i++){
            find_shortest(i,graph,tp);
        }
        for(int i=0;i<m;i++){
            int src=source[i]-'a';
            int tar=target[i]-'a';
            if (tp[src][tar]==1e9){
                return -1;
            }rett+=tp[src][tar];
        }
        return rett;

    }

    void find_shortest(int src, vector<vector<pair<int,int>>>&graph,vector<vector<int>>&tp){
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq; // node , dist
        tp[src][src]=0;
        pq.push({0, src});
        while(!pq.empty()){
            int node1=pq.top().second;
            int curr_cost=pq.top().first;
            pq.pop();

            for(auto it : graph[node1]){
                int node=it.first;
                int cost=it.second;
                if (tp[src][node]>cost+curr_cost){
                    tp[src][node]=cost+curr_cost;
                    pq.push({tp[src][node],node});
                }
            }
        }

    }
};