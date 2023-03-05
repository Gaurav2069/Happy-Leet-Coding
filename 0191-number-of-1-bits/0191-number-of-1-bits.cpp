class Solution {
public:
    int hammingWeight(uint32_t n) {
       
        /*int cnt=0;
        while(n>0){
            int rem=n%10;
            if(rem==1){
                cnt++;    //in case of binary type ques. always think of bitwise operators.
            }
            n=n/10;
        }
        return cnt+1; */
        
        int cnt=0;
        while(n>0){
            if(n&1){
                cnt++;
            }
            n=n>>1;
        }
        return cnt;
    }
};