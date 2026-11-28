class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        for i in nums:
            if i==target:
                return nums.index(i)
            elif i > target:
                return nums.index(i)
        return len(nums)