class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector <int> a(n+1);
        int i;
        for(i=0;i<n;i++){
            if(nums[i]>=1 && nums[i]<=n)
                a[nums[i]]++;
        }
        for(i=1;i<=n;i++){
            if(a[i]==0)
                return i;
        }
        return n+1;
    }
};