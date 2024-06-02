/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
  
    for(int i=0;i<numsSize;i++){
        
        nums[i]=nums[i]*nums[i];
    }
    int minindex;
    for(int i=0;i<numsSize-1;i++){
        minindex=i;
        for(int j=i+1;j<numsSize;j++){
            if(nums[j]<nums[minindex]){
                minindex=j;
            }
        }
        if(minindex!=i){
            int temp=nums[i];
            nums[i]=nums[minindex];
            nums[minindex]=temp;
        }

    }
    *returnSize=numsSize;

    return nums;
    
}