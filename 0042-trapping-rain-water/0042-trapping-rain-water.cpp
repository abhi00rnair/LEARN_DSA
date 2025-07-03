class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int rett=0,left=0,right=n-1,leftmax=0,rightmax=0;

        while(left<=right){
            if(height[left]<=height[right]){
                int hh=height[left];
                if(leftmax>hh){
                    rett+=leftmax-hh;
                    left++;
                }else{
                    leftmax=hh;
                    left++;
                }
            }else{
                int hh=height[right];
                if(rightmax>hh){
                    rett+=rightmax-hh;
                    right--;
                }else{
                    rightmax=hh;
                    right--;
                }
            }
        }
        return rett;
    }
};