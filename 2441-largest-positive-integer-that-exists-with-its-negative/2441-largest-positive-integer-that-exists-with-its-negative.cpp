class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0, h=nums.size()-1;
        while(l < h)
        {
            if((nums[l] + nums[h]) == 0) return  nums[h];
            else if((nums[l] + nums[h]) < 0) l++;
            else h--;
        }
        return -1;
    }
};