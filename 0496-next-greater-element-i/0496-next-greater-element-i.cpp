class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        map<int, int>mp;
        for(int i=0;i<n;i++){
            int flag=1;
            for(int j=i+1;j<n;j++){
                if(nums2[i]<nums2[j]){
                    mp[nums2[i]]=nums2[j];
                    flag=0;
                    break;
                }
            }if(flag==1){
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