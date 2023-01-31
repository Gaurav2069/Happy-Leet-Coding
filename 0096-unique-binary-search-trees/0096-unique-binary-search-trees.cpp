class Solution {
public:
    int numTrees(int n) {
        int c[n+1];
        c[0]=1;
        c[1]=1;
        int i,j;
        
        for(i=2;i<=n;i++){
            c[i]=0;
            for(j=0;j<i;j++){
                c[i]=c[i]+c[j]*c[i-j-1];
                
            }
        }
        return c[n];
    }
};