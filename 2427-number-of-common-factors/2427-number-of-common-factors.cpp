class Solution {
public:
    int commonFactors(int a, int b) {
        
        int i,cnt=0;
        for(i=1;i<=min(a,b);i++){

            if(a%i==0 && b%i==0){
                cnt++;
            }
        }
        return cnt;
    }
};