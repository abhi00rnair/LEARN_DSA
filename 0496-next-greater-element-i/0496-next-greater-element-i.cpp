class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        map<int, int>mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums2[i]<nums2[j]){
                    mp[nums2[i]]=nums2[j];
                    break;
                }
            }if(!mp[nums2[i]]){
            mp[nums2[i]]=-1;
            }
        }
        vector<int>rett;
        for(int i=0;i<nums1.size();i++){
            for(auto it:mp){
                if(it.first==nums1[i]){
                    rett.push_back(it.second);
                    break;
                }
            }
        }
        return rett;
    }
};