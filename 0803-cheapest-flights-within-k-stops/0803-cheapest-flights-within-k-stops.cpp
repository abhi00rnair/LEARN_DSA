class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto it: flights){
            int node1=it[0];
            int node2=it[1];
            int dist=it[2];
            adj[node1].push_back({node2,dist});
        }
        vector<vector<int>>dist(n,vector<int>(k+2,INT_MAX));
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>>pq;
        dist[src][0]=0;
        pq.push({0, src,0});

        while(!pq.empty()){
            auto[cost, node,stop]=pq.top();
            pq.pop();
            if(node==dst){
                return cost;
            }

            if(stop<=k){
                for(auto it: adj[node]){
                    int distt=it.second;
                    int nodee=it.first;
                    if(cost+distt<dist[nodee][stop+1]){
                        dist[nodee][stop+1]=cost+distt;
                        pq.push({dist[nodee][stop+1],nodee,stop+1});
                    }
                }
            }
        }
        return -1;
    }
};