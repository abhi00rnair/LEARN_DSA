class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        vector<int> resarr;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                resarr.push_back(nums1[i]);
                i++;
            }else{
                resarr.push_back(nums2[j]);
                    j++;
                }
            }
        while (i < nums1.size()) {
            resarr.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size()) {
            resarr.push_back(nums2[j]);
            j++;
        }
        int len=resarr.size();
        double ret=0;
        if(len%2==0){
            ret=(resarr[(len/2)-1]+resarr[len/2])/2.0;
        }else{
            ret=resarr[len/2];
        }
        return ret;
    }
};