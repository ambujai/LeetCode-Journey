class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> merged;
        merged.insert(merged.end(), nums1.begin(), nums1.end());
        merged.insert(merged.end(), nums2.begin(), nums2.end());

        int size = std::size(merged);
        std::ranges::sort(merged);
        if(size%2==0)
            return ((merged[size/2-1] + merged[size/2])/2.0);
        else
            return (merged[std::floor(size/2)]);
    }
};