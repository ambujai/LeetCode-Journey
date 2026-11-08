class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<std::size(nums); i++){
            for(int j=i+1; j<std::size(nums); j++){
                if (nums[i]+nums[j]==target)
                    return {i,j};
            }
        }
        return {};
    }
};