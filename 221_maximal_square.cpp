class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int current_max = 0;
        for(int i = 0;i < matrix.size();i++){
            int current = 0;
            for(int j = 0;j < matrix[i].size();j++){
                if(matrix[i][j] == '1')
                    current++;
                else
                    current = 0;
                    
                if(current > current_max){
                    int flag = 0;
                    if(i + current -1 < matrix.size()){
                        for(int a = i;a < i+current;a++){
                            for(int b = j;b > j-current;b--){
                                if(matrix[a][b] == '0'){
                                    flag = 1;
                                    break;
                                }
                            }
                            if(flag == 1)
                                break;
                        }
                    }
                    else{
                        flag = 1;
                    }
                   if(flag == 0)
                        current_max = current;
                    else
                        current--;
                }
            }
        }
        return current_max*current_max;
    }
};