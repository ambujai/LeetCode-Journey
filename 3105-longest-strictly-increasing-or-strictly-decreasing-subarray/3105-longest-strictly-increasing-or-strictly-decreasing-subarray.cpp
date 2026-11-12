class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int inc = 1, dec = 1, result = 1;
        int n = std::size(nums);

        for(int i=1 ; i<n ; i++)
        {

            if(nums[i] > nums[i-1]){
                dec =1;
                inc += 1;
            }

            else if(nums[i] < nums[i-1]){
                dec += 1;
                inc = 1;
            }

            else{
                inc = 1;
                dec = 1;
            }

            result = std::max({result,inc,dec});
        }
        return result;
    }
};