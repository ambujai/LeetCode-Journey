class Solution:
    def minimizeSum(self, nums: List[int]) -> int:

        low = 0
        nums.sort()
        n = len(nums)

        a = nums[-2] - nums[1]
        b = nums[-3] - nums[0]
        c = nums[-1] - nums[2]

        high = min([a,b,c])

        return high + low