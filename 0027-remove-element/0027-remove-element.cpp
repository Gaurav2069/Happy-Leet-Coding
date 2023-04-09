class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]!=val){
               nums[ans]=nums[i]; //'in-place' likha hai...matlab nums me hi kaam krna hai 
                ans++;            // bina kisi dusra array liye....
            }
        }
        return ans;
    }
};