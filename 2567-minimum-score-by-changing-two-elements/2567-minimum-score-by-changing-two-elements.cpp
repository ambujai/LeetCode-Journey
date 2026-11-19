class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int low = 0;
        int n = size(nums);

        sort(nums.begin(), nums.end());
        
        int a = nums[n-2] - nums[1];
        int b = nums[n-3] - nums[0];
        int c = nums[n-1] - nums[2];

        int high = min({a,b,c});

        return high + low;
    }
};