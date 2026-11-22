class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;

        for(int i = 0; i<size(nums); i++){
            if(nums[i] != nums[k-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};