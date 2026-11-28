/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* res=malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    long int product=1;
    int zeroes=0;
    int nonzeroes=0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]!=0)
        {
            product*=nums[i];
            nonzeroes=1;
        }
        else
        {
            zeroes++;
        }
    }
    for(int i=0; i<numsSize; i++)
    {
        if(zeroes==0)
        {
            res[i]=product/nums[i];
        }
        else if(zeroes!=1 && nums[i]!=0)
        {
            res[i]=0;
        }
        else if(nums[i]==0 && nonzeroes==1 && zeroes-1==0)
        {
            res[i]=product;
        }
        else
        {
            res[i]=0;
        }
    }
    return res;
}
