class Solution {
public:
    int mySqrt(int x) {
        double temp = 1;
        for(int i = 0;i < 20;i++){
            temp = (temp + x / temp) / 2;
        }
        return int(temp);
    }
};