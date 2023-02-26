class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j] > nums[i])
                {
                    maxi=max(maxi,nums[j]-nums[i]);
                }
            }
        }
        if(maxi==INT_MIN) return -1;
        return maxi;
    }
};