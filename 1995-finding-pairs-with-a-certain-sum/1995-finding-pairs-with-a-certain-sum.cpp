class FindSumPairs {
public:
vector<int>nums_1,nums_2;
map<int,int>mp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        nums_1=nums1;
        nums_2=nums2;
        for(auto it:nums_2){
            mp[it]++;
        }
    }
    
    void add(int index, int val) {
        mp[nums_2[index]]--;
        if(mp[nums_2[index]]==0){
            mp.erase(nums_2[index]);
        }
        nums_2[index]+=val;
        mp[nums_2[index]]++;
    }
    
    int count(int tot) {
        int res=0;
        for(auto it:nums_1){
            int req=tot-it;
            if(mp.count(req)){
                res+=mp[req];
            }
        }
        return res;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */