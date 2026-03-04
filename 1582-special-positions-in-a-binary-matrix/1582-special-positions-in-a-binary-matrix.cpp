class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int rett=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int flag=0;
                if(mat[i][j]==1){
                    for(int k=0;k<m;k++){
                        if(mat[i][k]==1 && j!=k){
                            flag=1;
                            break;
                        }
                    }
                    for(int k=0;k<n;k++){
                        if(mat[k][j]==1 && k!=i){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0){
                        rett++;
                    }
                }
            }
        }
        return rett;
    }
};