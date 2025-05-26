class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(func(board,word,i, j,0,n,m)==true){
                    return true;
                }
            }
        }
        return false;
        
    }

    bool func(vector<vector<char>>&board, string word, int i, int j, int index, int n , int m){
        if(index==word.size()){
            return true;
        }
        if(i<0 || j<0 || i>=n || j>=m || board[i][j]!=word[index]){
            return false;
        }
        char temp=board[i][j];
        board[i][j]='#';
        bool rett=func(board,word, i+1,j,index+1, n, m)||
        func(board,word,i-1, j, index+1,n,m)||
        func(board,word,i, j+1, index+1,n,m)||
        func(board, word, i, j-1, index+1, n,m);

        board[i][j]=temp;
        return rett;        
    }
};