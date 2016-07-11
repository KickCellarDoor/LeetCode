class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int index = 0,num = n - m + 1,result = 0;
        unsigned int a = m,b = n,current = 1;
        while(current < num){
            index ++;
            current = current << 1;
        }
        while(current <= a){
            if(((b >> index) & 1 == 1) && ((a >> index) & 1 == 1))
                result += current;
            current = current << 1;
            index ++;
        }
        return result;
    }
};