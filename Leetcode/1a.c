/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* output;
    *returnSize=0;
    int i,j;
    for(i=0,j=1; i<j && j<numsSize; j++)
    {
        if(nums[i]+nums[j]==target)
        {
            *returnSize=2;
            break;
        }
        if(j==numsSize-1)
        {
            i++;
            j=i;
        }
    }
    output=(int*)malloc((*returnSize)*sizeof(int));
    if(*returnSize==2)
    {
        output[0]=i;
        output[1]=j;
    }
    return output;
}