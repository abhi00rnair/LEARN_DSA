class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>>temp=mat;
        vector<vector<int>>og=mat;
        int n=mat.size(),m=mat[0].size();
        for(int x=0;x<k;x++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(i%2==0){
                        if(j==m-1){
                            temp[i][j]=mat[i][0];
                        }else{
                        temp[i][j]=mat[i][j+1];
                        }
                    }else{
                        if(j==0){
                            temp[i][j]=mat[i][m-1];
                        }else{
                            temp[i][j]=mat[i][j-1];
                        }
                    }
                }
            }
            mat=temp;
        }
        if(temp==og){
            return true;
        }
        return false;
    }
};