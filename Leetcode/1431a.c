/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* res=malloc(candiesSize*sizeof(bool));
    *returnSize=candiesSize;
    int max=0;
    for(int i=0; i<candiesSize; i++)
    {
        if(candies[i]>max)
        {
            max=candies[i];
        }
    }
    for(int i=0; i<candiesSize; i++)
    {
        if(candies[i]+extraCandies>=max)
        {
            res[i]=true;
        }
        else
        {
            res[i]=false;
        }
    }
    return res;
}