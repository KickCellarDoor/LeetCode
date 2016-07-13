class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int n = nums.size();
        k = k % n;
        for(int i = n-k;i < n;i++){
            temp.push_back(nums[i]);
        }
        for(int i = 0;i < k;i++)
            nums.pop_back();
        nums.insert(nums.begin(),temp.begin(),temp.end());
    }
};