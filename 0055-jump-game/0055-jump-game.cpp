class Solution {
public:
    bool canJump(vector<int>& nums) {
        int rec_i=0;
        for(int i=0; i<nums.size();i++){
            if(i>rec_i){
                return false;
            }
            if(i+nums[i]>rec_i){
                rec_i=nums[i]+i;
            }
        }
        return true;
    }
};