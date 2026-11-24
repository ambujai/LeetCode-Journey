class Solution:
    def maxLength(self, nums: List[int]) -> int:
        result = 0
        ans = 0
        for i in range(len(nums)):
            for j in range(i+1,len(nums)+1):
                portion = nums[i:j]

                product = math.prod(portion)
                gcd = math.gcd(*portion)
                lcm = math.lcm(*portion)

                if (product == gcd * lcm) and len(portion)>result:
                    result = len(portion)
        return result