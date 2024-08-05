class Solution {
public:
    int numTeams(vector<int>& rating) {
        unordered_map<int,int>greater;
        unordered_map<int,int>lesser;
        int n=rating.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(rating[j]>rating[i]){
                    greater[rating[i]]++;
                }else{
                    lesser[rating[i]]++;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int flag=0;
                if(rating[i]>rating[j]){
                    count+=lesser[rating[j]];
                }else{
                    count+=greater[rating[j]];
                }

            }
        }
        return count;
    }
};