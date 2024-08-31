class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> degree(numCourses, 0);
        for(int i = 0; i < prerequisites.size(); i++) {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            degree[prerequisites[i][0]]++;
        }
        queue<int> que;
        for (int i = 0; i < numCourses; i++) {
            if (degree[i] == 0) {
                que.push(i);
            }
        }
        
        vector<int> ret;
        
        while (!que.empty()) {
            int node = que.front();
            que.pop();
            ret.push_back(node);
            
            for (auto it : adj[node]) {
                degree[it]--;
                if (degree[it] == 0) {
                    que.push(it);
                }
            }
        }
                if (ret.size() == numCourses) {
            return ret;
        } else {
            return {};
        }
    }
};
