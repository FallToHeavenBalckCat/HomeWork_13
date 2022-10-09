class Solution {
public:
    int NumberOf1(int n) {
        unsigned int nn=n;
        int res=0;
        while(nn){
            if(nn&1==1) res++;
            nn>>=1;
        }
        return res;
    }
};