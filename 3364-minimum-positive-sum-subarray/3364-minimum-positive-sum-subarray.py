class Solution:
    def minimumSumSubarray(self, nums: List[int], l: int, r: int) -> int:
        subarrays = []
        for i in range(len(nums)):
            for j in range(i+l, len(nums)+1):
                if len(nums[i:j]) > r:
                    continue
                if sum(nums[i:j]) > 0:
                    subarrays.append(sum(nums[i:j]))

        if not subarrays:
            return -1
        else:
            return min(subarrays)
