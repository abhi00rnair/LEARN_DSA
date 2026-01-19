class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int rett=0;
        int n=mat.size(), m=mat[0].size();
        vector<vector<int>>prefix(n+1,vector<int>(m+1,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                prefix[i+1][j+1]=mat[i][j]+prefix[i][j+1]+prefix[i+1][j]-prefix[i][j];
            }
        }
        int left=0,right=min(m,n);
        while(left<=right){
            int mid=(left+right)/2;
            bool found=false;

            for(int i=0;i+mid<=n && !found ;i++){
                for(int j=0;j+mid<=m;j++){
                    int sum=prefix[i+mid][j+mid]-prefix[i][j+mid]-prefix[i+mid][j]+prefix[i][j];
                    if(sum<=threshold){
                        found=true;
                        break;
                    }
                }
            }
            if(found){
                rett=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return rett;

    }
};