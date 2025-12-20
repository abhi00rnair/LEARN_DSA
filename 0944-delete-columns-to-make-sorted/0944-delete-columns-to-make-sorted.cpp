class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
       int n=strs[0].size();
       int rett=0;
       for(int i=0;i<n;i++){
         int j=1;
         int m=strs.size();
         while(j<m){
            string curr=strs[j];
            string prev=strs[j-1];
            if(curr[i]<prev[i]){
                rett++;
                break;
            }
            j++;
         }
       }
       return rett;
    }
};