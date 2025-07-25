class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int>visited(numCourses,-1);
        vector<int>pathvisited(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(visited[i]==-1){
                if(detectcycle(i,adj,visited,pathvisited)==true){
                    return false;
                }
            }
        }
        return true;
    }
    bool detectcycle(int i,vector<vector<int>>&adj,vector<int>&visited,vector<int>&pathvisited){
        visited[i]=1;
        pathvisited[i]=1;

        for(auto it:adj[i]){
            if(visited[it]==-1){
                if(detectcycle(it,adj,visited,pathvisited)){
                    return true;
                }
                }else if(pathvisited[it]==1){
                    return true;
                }
        }
        pathvisited[i]=0;
        return false;
    }
};