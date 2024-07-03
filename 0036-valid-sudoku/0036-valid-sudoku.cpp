class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        unordered_set<char>row[9];
        unordered_set<char>colo[9];
        unordered_set<char>grid[9];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]!='.'){
                    char num=board[i][j];
                    int subgridIndex = (i / 3) * 3 + j / 3;
                    if (row[i].count(num) || colo[j].count(num) || grid[subgridIndex].count(num)) {
                        return false;
                    }
                    row[i].insert(num);
                    colo[j].insert(num);
                    grid[subgridIndex].insert(num);
                }
            }
        }
        return true;
    }
};