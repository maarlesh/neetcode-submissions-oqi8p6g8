class Solution {
public:
    int findMin(vector<int> &nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        for(int i=0; i < nums.size() - 1; i++){
            int left = nums[i];
            int right = nums[i + 1];
            if(left > right){
                return right;
            }
        }
        return nums[0];
    }
};
