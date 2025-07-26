class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;

        pq.push({0,{0,0}});
        dist[0][0]=0;
        vector<int>tp{-1,0,0,1};
        vector<int>tr{0,1,-1,0};
        int rett=INT_MAX;

        while(!pq.empty()){
            int dis=pq.top().first;
            int row=pq.top().second.first;
            int colo=pq.top().second.second;
            pq.pop();
            if(row==n-1 && colo==m-1){
                return dis;
            }
            for(int x=0;x<4;x++){
                int newrow=row+tp[x];
                int newcolo=colo+tr[x];

                if(newrow>=0 && newcolo>=0 && newrow<n && newcolo<m ){
                    int temp=abs(heights[row][colo]-heights[newrow][newcolo]);
                    int maxi=max(temp,dis);
                    if(maxi<dist[newrow][newcolo]){
                    dist[newrow][newcolo]=maxi;
                    pq.push({maxi,{newrow,newcolo}});
                    }
                }
            }

        }
        return -1;
    }
};