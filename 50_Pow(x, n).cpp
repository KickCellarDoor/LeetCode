class Solution {
public:
    double myPow(double x, int n) {
        double result = x;
        double temp_n = n;
        int num = 1;
        if(x == 1)return 1;
        if(x == -1)return n%2 ? -1:1;
        if(n == 0)return 1;
        if(temp_n < 0){
            temp_n = -temp_n;
            result = 1/result;
            x = 1/x;
        }
        while(num < temp_n/2){
            result *= result;
            num *= 2;
            if(result == 0)
                return 0;
        }
        for(int i = num;i < temp_n;i++)
            result *= x;
        return result;
    }
};