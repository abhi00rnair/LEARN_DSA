class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>visited(n,vector<int>(m,-1));
        vector<pair<int,int>>temp;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || i==n-1 || j==0 || j==m-1) && board[i][j]=='O'){
                    temp.push_back({i,j});
                }
            }
        }
        vector<int>tp{-1,0,0,1};
        vector<int>tr{0,1,-1,0};
        for(auto it:temp){
            dfs(it.first, it.second,visited,board,tp,tr);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==-1 && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
        
    }
    void dfs(int i, int j,vector<vector<int>>&visited, vector<vector<char>>&board, vector<int>&tp,vector<int>&tr){
        visited[i][j]=1;
        for(int x=0;x<4;x++){
            int newrow=i+tp[x];
            int newcolo=j+tr[x];

            if(newrow>=0 && newcolo>=0 && newrow<board.size() && newcolo<board[0].size() && board[newrow][newcolo]=='O' && visited[newrow][newcolo]==-1){
                dfs(newrow, newcolo,visited,board,tp,tr);
            }
        }
    }
};