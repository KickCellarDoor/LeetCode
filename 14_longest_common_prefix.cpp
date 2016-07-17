class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool flag = 1;
        int index = -1;
        string result;
        if(strs.size() == 0)return result;
        if(strs[0].size() == 0)return result;
        if(strs.size() == 1)
            return strs[0];
        while(flag){
            if(flag == 1)
                index++;
            for(int i = 1;i < strs.size();i++){
                if(strs[i].size() < index+1){flag = 0;break;};
                if(strs[i][index] != strs[i-1][index]){
                    flag = 0;
                    break;
                }
            }
        }
        if(index == 0)
            return result;
        for(int i = 0;i <= index-1;i++){
            result.push_back(strs[0][i]);
        }
        return result;
    }
};