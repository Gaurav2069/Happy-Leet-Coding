class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0,r;
        while(n>0){
            r=n%k;
            sum=sum+r;
            n=n/k;
        }
        return sum;
    }
};