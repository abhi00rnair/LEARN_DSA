class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int total=0;
        vector<int>rem1;
        vector<int>rem2;

        for(int it:nums){
            total+=it;
            if(it%3==1){
                rem1.push_back(it);
            }else if(it%3==2){
                rem2.push_back(it);
            }
        }
        sort(rem1.begin(), rem1.end());
        sort(rem2.begin(), rem2.end());
        int r=total%3;

        if(r==0){
            return total;
        }
        int value=1e9;
        if(r==1){
            int tp=(rem1.size()>=1)? rem1[0] : 1e9;
            int tr=(rem2.size()>=2)? rem2[0]+rem2[1] :1e9;
            value=min(tp, tr);
        }
        if(r==2){
            int tp=(rem2.size()>=1)? rem2[0] : 1e9;
            int tr=(rem1.size()>=2)? rem1[0]+rem1[1] : 1e9;
            value=min(tp, tr);
        }
        return total-value;

    }
};