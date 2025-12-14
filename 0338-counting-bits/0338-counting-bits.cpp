class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>rett(n+1,0);
        for(int i=0;i<=n;i++){
            int temp=0;
            int curr=i;
            while(curr>0){
                temp+=curr&1;
                curr=curr>>1;
            }
            rett[i]=temp;
        }
        return rett;
    }
};