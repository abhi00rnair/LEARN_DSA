class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxarea=0;
        while(left<right){
            int width=right-left;
            int heightt=0;
            height[right]<height[left]?heightt=height[right]:heightt=height[left];
            int area=width*heightt;
            area>maxarea?maxarea=area:maxarea=maxarea;
            
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxarea;
    }
};