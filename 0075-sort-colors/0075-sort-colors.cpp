class Solution {
public:
    void sortColors(vector<int>& nums) {
        quicksort(nums,0,nums.size()-1);
        
    }
    void quicksort(vector<int>&nums, int low, int high){
        if(low>=high){
            return;
        }else{
            int partindex=partfunc(nums, low, high);
            quicksort(nums,low,partindex-1);
            quicksort(nums,partindex+1,high);
        }
    }
   
    
    int partfunc(vector<int>&arr ,int low,int high){
        int i=low;
        int j=high;
        int pivot=arr[low];
        while(i<j){
            while(arr[i]<=pivot && i<high){
                i++;
            }
            while(arr[j]>pivot && j>low){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }
            
        }
        swap(arr[low],arr[j]);
        return j;
    }
};