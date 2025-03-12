class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1;
        vector<int>rett;
        while(left<right){
            if(numbers[left]+numbers[right]>target){
                right--;
            }else if (numbers[left]+numbers[right]<target){
                left++;
            }else{
                rett.push_back(left+1);
                rett.push_back(right+1);
                break;
            }
        }
        return rett;
    }
};