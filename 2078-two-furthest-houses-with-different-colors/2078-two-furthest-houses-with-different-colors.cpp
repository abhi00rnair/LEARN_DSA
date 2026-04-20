class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size(), rett=INT_MIN;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(colors[i]!=colors[j]){
        //             rett=max(rett,abs(i-j));
        //         }
        //     }
        // }
        int k=n-1;
        for(int i=0;i<n;i++){
            if(colors[i]!=colors[k]){
                rett=max(abs(i-k),rett);
            }
        }
        k=0;
        for(int i=n-1;i>0;i--){
            if(colors[i]!=colors[k]){
                rett=max(abs(i-k), rett);
            }
        }
        return rett;
    }
};