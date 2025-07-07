class KthLargest {
public:
int index;
priority_queue<int,vector<int>,greater<int>>pq;
    KthLargest(int k, vector<int>& nums) {
        index=k;
        int n=nums.size();
        int nn=min(k,n);
        n=n-1;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nn;i++){
            pq.push(nums[n]);
            n--;
        }
    }
    
    int add(int val) {
        if(pq.size()<index){
            pq.push(val);
        }else if(pq.top()<val){
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */