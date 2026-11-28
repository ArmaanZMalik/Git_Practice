class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        output=[]
        n=len(nums)
        for i in range(0,n-1):
            for j in range(i+1,n):
                if nums[i]+nums[j]==target:
                    output+=[i,j,]
                    return output
        return output