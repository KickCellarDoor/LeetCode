class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3)return false;
        int max = INT_MIN,second_max = INT_MIN;
        for(int i = nums.size()-1;i >= 0;i--){
            if(nums[i] < second_max)
                return true;
            else if(nums[i] < max)
                second_max = nums[i];
            else
                max = nums[i];
        }
        return false;
    }
};
