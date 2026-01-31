class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count_live=0;
                int count_dead=0;
                for(int x=-1;x<=1;x++){
                    for(int y=-1;y<=1;y++){
                        if(i+x<n && i+x>=0 && j+y<m && j+y>=0){
                            if(board[i+x][j+y]==1 || board[i+x][j+y]==-1){
                                count_live++;
                            }
                        }
                    }
                }
                if(board[i][j]==1){
                    count_live--;
                }
                if(board[i][j]==1 && count_live<2){
                    board[i][j]=-1;
                }else if(board[i][j]==1 && count_live>3){
                    board[i][j]=-1;
                }else if(board[i][j]==0 && count_live==3){
                    board[i][j]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]>0){
                    board[i][j]=1;
                }else{
                    board[i][j]=0;
                }
            }
        }    
        
    }
};