class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        vector<int> subarrays;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + l; j < min((int)nums.size() + 1, i + r + 1); j++) {

                // accumulate() calculates the sum of elements from index i to j-1 (j is excluded).
                // Equivalent to Python's sum(nums[i:j]).
                if (accumulate(nums.begin() + i, nums.begin() + j, 0) > 0) {
                    subarrays.push_back(accumulate(nums.begin() + i, nums.begin() + j, 0));
                }
            }
        }
        if (subarrays.empty()) {
            return -1;
        }
        else {
            // min_element() returns an iterator pointing to the smallest element.
            // *min_element() dereferences the iterator to get the actual minimum value.
            return *min_element(subarrays.begin(), subarrays.end());
        }
    }
};