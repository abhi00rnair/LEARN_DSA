class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;

        }
        queue<int>Qq;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                Qq.push(i);
            }
        }
        vector<int>rett;
        while(!Qq.empty()){
            int node=Qq.front();
            Qq.pop();
            rett.push_back(node);
            for(int it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    Qq.push(it);
                }
            }
        }
        return rett.size()==numCourses ? rett : vector<int>();
    }
};