class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        queue<int>que;
        int ret=0;
        int n=isConnected.size();
        int visited[n];
        //memset(visited,0,n);
        for(int j=0;j<n;j++){
            visited[j]=0;
        }
        for(int i=0;i<n;i++){
            if(!(visited[i])){
                func(isConnected,visited,que,i,n);
                ret++;
            }
        }
        return ret;
    }
    void func(vector<vector<int>>&nums,int visited[],queue<int>&que, int i, int n){
        que.push(i);
        visited[i]=1;
        while(!que.empty()){
            int node=que.front();
            que.pop();
            for(int j=0;j<n;j++){
                if(!(visited[j]) && nums[node][j]==1){
                    que.push(j);
                    visited[j]=1;
                }
            }
        }
    }
};