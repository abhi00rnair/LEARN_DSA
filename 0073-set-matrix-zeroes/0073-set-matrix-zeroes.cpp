class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int a=matrix.size();
        int b=matrix[0].size();
        vector<pair<int,int>>ds;
        zeros(matrix,ds,a,b);
        setzero(matrix,ds); 
    }
    
    void zeros(vector<vector<int>>&matrix,vector<pair<int,int>>&ds,int a,int b){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(matrix[i][j]==0){
                    ds.emplace_back(i,j);
                }
            }
        }
    }
    
   void setzero(vector<vector<int>>&matrix, vector<pair<int,int>>&ds) {
    for (const auto& p:ds) {
        int row = p.first;
        int col = p.second;
        for (int j=0; j<matrix[0].size();++j) {
            matrix[row][j] =0;
        }
        for (int i=0; i<matrix.size();++i) {
            matrix[i][col] =0;
        }
    }
}

};