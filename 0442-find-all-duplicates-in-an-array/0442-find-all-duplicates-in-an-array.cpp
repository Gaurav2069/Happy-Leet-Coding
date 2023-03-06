class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){  //remember this -1 wala concept
            if(nums[i]==nums[i+1])       // jab bhi i+1 aayega to nums.size-1 dekh lena ek baar
                ans.push_back(nums[i]);
        }
        return ans;
    }
};