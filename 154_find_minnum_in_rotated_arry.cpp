class Solution {
public:
    int findMin(vector<int>& nums) {
        int mid = nums.size() - 1;
        while(nums[mid/2] < nums[mid]){
            mid /= 2;
        }
        int i;
        for(i = mid;i >= 1;i--){
            if(nums[i-1] > nums[i])
                break;
        }
        return nums[i];
    }
};