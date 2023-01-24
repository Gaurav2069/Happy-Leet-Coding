class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        int left=-1,right=-1;
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid] == t){
                left = mid;
                r=mid-1;
            }
            else if(nums[mid]<t){
                l=mid+1;
            }
            else r=mid-1;
        }
        l=0,r=nums.size()-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid] == t){
                right = mid;
                l=mid+1;
            }
            else if(nums[mid]<t){
                l=mid+1;
            }
            else r=mid-1;
        }
        return {left,right};

    }
};