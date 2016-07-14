class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(nums.size() == 0)return ans;
        int start = nums[0],end = nums[0],offset = nums[0] - 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] != i+offset){
                offset = nums[i] - i;
                if(start == end){
                    ans.push_back(itos(start));
                }
                else{
                    ans.push_back(itos(start) + "->" + itos(end));
                }
                start = nums[i];
                end = nums[i];
            }
            else{
                end = nums[i];
            }
        }
        if(start == end){
            ans.push_back(itos(start));
        }
        else{
            ans.push_back(itos(start) + "->" + itos(end));
        }
        return ans;
    }
private:
    string itos(int i){
        stringstream istr;
        istr << i;
        string s;
        istr >> s;
        return s;
    }
};