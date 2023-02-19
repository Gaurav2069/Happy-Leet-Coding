class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
    vector<int>left(k+1);
    vector<int>right(k+1);
    int total=0,n=cardPoints.size();
    int i,j;
    left[0]=0;
    right[0]=0;
    for(i=1;i<=k;i++){
        left[i]=left[i-1]+cardPoints[i-1];
        right[i]=right[i-1]+cardPoints[n-i];
    }
    for(i=0;i<=k;i++){
        total= (total>(left[i]+right[k-i]))?total:(left[i]+right[k-i]);
    }
    return total;
    }
};