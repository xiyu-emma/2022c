int singleNumber(int* nums, int numsSize){
    int ans=0;
    for(int i=0; i<numsSize; i++){
        ans = ans ^ nums[i]; //^�i�H��ۦP���r��0�A���P���d�U��
    }
    return ans;
}
