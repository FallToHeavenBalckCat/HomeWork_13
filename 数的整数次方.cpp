class Solution {
    typedef long long LL;
public:
    /*快速幂的写法，
    这里注意数据的范围，最后的一个数据会使用int类型取值的下限来卡，
    所以要用long long 来存，因为负数在计算机中的表示是取绝对值再求补码，最高位是
    符号位，所以会多出一位，int放不下，所以会下溢，应该使用数据范围更大的long long
    来村*/
    double Power(double base, int exponent) {
        double res=1;
        LL t=abs((LL)exponent);
        while(t){
            if(t&1) res=res*base;
            base=base*base;
            t>>=1;
        }
        if(exponent>=0) return res;
        else return 1/res;
        //-2147483648
        //-2147483648 --- 2147483647
    }
};