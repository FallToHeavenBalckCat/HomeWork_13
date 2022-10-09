class Solution {
public:
    /*dp(n)表示最大值，因为至少要减一刀，所以dp(n)可以表示成dp(i)*dp(n-i)中的最大值，
    同理，dp(i)也可以继续按照同样的方法去做，假设对于长度为i的绳子，假设在j的位置减
    一刀，那么就被分成了长度为j,和i-j的绳子，j是被分出来的第一段绳子，此时有两种情况
    ，一种是直接相乘，不再继续将i-j继续分，另一种是将i-j长度的绳子继续分下去；第一种
    是j*(i-j),第二种是j*dp[i-j];如此进行下去最后返回的dp[n]就是结果*/
    int maxProductAfterCutting(int length) {
        int n=length;
        vector<int> dp(n+1,0);
        //int *dp=new int[n+1];
        //为啥用动态数组结果不对呢？
        for(int i=2;i<=n;i++){
            for(int j=1;j<i;j++){
                dp[i]=max(dp[i],max(j*(i-j),j*dp[i-j]));
            }
        }
        return dp[n];
    }
};