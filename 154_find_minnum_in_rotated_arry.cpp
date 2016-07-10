class Solution {
public:
    int findMin(vector<int>& nums) {
        int i;
        for(i = nums.size()-1;i >= 1;i--){
            
            if(nums[i-1] > nums[i])
                break;
        }
        return nums[i];
    }
};