class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        long long base=m*1LL*k*1LL;
        if(base>bloomDay.size()){
            return -1;
        }
        while(low<=high){
           int mid=(low+high)/2;
            int count=0;
            int flowers=0;
            for(auto it :bloomDay){
                if(it<=mid){
                    count++;
                    if(count==k){
                        flowers++;
                        count=0;
                    }
                }else{
                    count=0;
                }
            }
            if(flowers>=m){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};