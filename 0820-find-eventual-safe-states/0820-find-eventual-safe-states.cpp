class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>rett;
        vector<int>visit(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(func(graph,i,visit)==true){
                rett.push_back(i);
            }
        }
        return rett;
    }

    bool func(vector<vector<int>>& graph, int node, vector<int>&visit){
        if(visit[node]!=-1){
            return visit[node]==1;
        }
        visit[node]=0;
        for(int it:graph[node]){
            if(func(graph,it,visit)==false){
                return false;
            }
        }
        visit[node]=1;
        return true;
    }
};