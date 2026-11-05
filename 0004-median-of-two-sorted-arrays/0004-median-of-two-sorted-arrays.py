class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        merge_list = nums1 + nums2
        merge_list.sort()
        if (len(merge_list)%2==0):
            result = (merge_list[int(len(merge_list)/2)-1] + merge_list[int(len(merge_list)/2)]) / 2
        else:
            result = merge_list[len(merge_list) // 2]
        return result