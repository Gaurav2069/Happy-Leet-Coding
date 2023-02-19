class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cumsum=0;
        int max=INT_MIN;
        int i;

        for(i=0;i<nums.size();i++){
            cumsum=cumsum+nums[i];
            max=(max>cumsum)?(max):(cumsum);

            if(cumsum<0){
                cumsum=0;
            }
        }
        return max;
    }
};