int missingNumber(int* nums, int numsSize) {
    int ret=0;
    
    for(int k=0;k<numsSize+1;k++){
        int flag =0;
        for(int i=0;i<numsSize;i++){
            if(nums[i]==k){
                flag=1;
            break;
            }
        }if(flag!=1){
            ret =k;
            break;
        }
    }return ret;
}