class KthLargest {
public:
priority_queue<int,vector<int>, greater<int>>pq;
int index;
    KthLargest(int k, vector<int>& nums) {
        index=k;
        for(int it:nums){
            add(it);
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