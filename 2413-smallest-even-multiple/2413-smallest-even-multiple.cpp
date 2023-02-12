class Solution {
public:
    int smallestEvenMultiple(int n) {
        int a=(n%2==0)?n:2*n;
        return a;
    }
};