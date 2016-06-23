class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector <vector<int>> result;
        if(nums.size() == 0)
            return result;
        permute_helper(0,nums,result);
        return result;
    }
private:
    void permute_helper(int begin,vector<int> &num,vector<vector<int>> &result){
        if(begin >= num.size()){
            result.push_back(num);
            return;
        }
        for(int i = begin;i < num.size();i++){
            swap(num[i],num[begin]);
            permute_helper(begin+1,num,result);
            swap(num[i],num[begin]);
        }
    }
};
