int singleNumber(int* nums, int numsSize){
    int ans=0;
    for(int i=0; i<numsSize; i++){
        ans = ans ^ nums[i]; //^可以把相同的字變0，不同的留下來
    }
    return ans;
}
