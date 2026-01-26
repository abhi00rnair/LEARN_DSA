class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        vector<vector<int>>rett;
        if(n<=2){
            rett.push_back({arr[0],arr[1]});
            return rett;
        }
        int minn_diff=arr[n-1];
        for(int i=0;i<n-1;i++){
            int diff=arr[i+1]-arr[i];
            minn_diff=min(minn_diff,diff);
        }
        for(int i=0;i<n-1;i++){
            int diff=arr[i+1]-arr[i];
            if(diff==minn_diff){
                rett.push_back({arr[i],arr[i+1]});
            }
        }
        return rett;
    }
};