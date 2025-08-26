class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        int rett=0;
        int dig=0;
        for(int i=0;i<n;i++){
            int len=dimensions[i][0];
            int wid=dimensions[i][1];
            int temp=len*len + wid*wid;
            if(temp>dig){
                dig=temp;
                rett=len*wid;
            }else if(temp==dig){
                rett=max(rett,len*wid);
            }
        }
        return rett;
    }
};