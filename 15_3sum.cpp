class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //sort
         for(int x = 0;x < nums.size();x++){
                int min = x;
                for(int y = x+1;y <nums.size();y++){
                    if(nums[y] < nums[min]){
                        min = y;
                    }
                }
                int temp = nums[x];
                nums[x] = nums[min];
                nums[min] = temp;
        }
        vector < vector <int> > answer;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] > 0)
                break;
            if(i >= 1)
                if(nums[i] == nums[i-1])
                    continue;
            for(int j = i+1;j < nums.size();j++){
                if(nums[i] + nums[j] > 0)
                    break;
                if(nums[j] == nums[j-1] && j-1 != i)
                    continue;
                for(int k = j+1;k < nums.size();k++){
                     if(nums[i] + nums[j] + nums[k] > 0)
                        break;
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector <int> one_answer;
                        one_answer.resize(3);
                        one_answer[0] = nums[i];
                        one_answer[1] = nums[j];
                        one_answer[2] = nums[k];
                        answer.push_back(one_answer);
                        break;
                    }
                }
            }
        }
        return answer;
    }
};
