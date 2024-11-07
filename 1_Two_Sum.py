class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        n = len(nums)
        for i in range (0, n, 1):
            for j in range (i+1, n, 1):
                if nums[i]+nums[j]== target:
                    return [i , j]  


# Test

a = Solution()


nums = [11,7,11,15,2]
target = 9
result  = a.twoSum(nums, target)
print(result)