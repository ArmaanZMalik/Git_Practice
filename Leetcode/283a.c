void moveZeroes(int* nums, int numsSize) {
    int zeroes=0;
    for(int i=numsSize-1; i>=0; i--)
    {
        if(nums[i]==0)
        {
            int j;
            for(j=i; j<numsSize-1-zeroes; j++)
            {
                nums[j]=nums[j+1];
            }
            nums[j]=0;
            zeroes++;
        }
        
    }
}