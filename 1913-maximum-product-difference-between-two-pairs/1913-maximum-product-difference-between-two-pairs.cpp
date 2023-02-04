class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int f=nums[0]*nums[1];
        int l=nums[nums.size()-1]*nums[nums.size()-2];
        return l-f;
    }
};