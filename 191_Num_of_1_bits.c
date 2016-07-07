/*************************************************************************
	> File Name: 191_Num_of_1_bits.c
	> Author: 
	> Mail: 
	> Created Time: 四  7/ 7 21:53:30 2016
 ************************************************************************/

int hammingWeight(uint32_t n) {
    int count = 0;
    do{ 
        count += (n&1);    
    }
     while(n >>= 1);
    return count;
}
