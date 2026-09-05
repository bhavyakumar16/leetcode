class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxind=0;

        for(int i=0;i<nums.size();i++){
            if(i>maxind)return false;
            int curr=nums[i]+i;
            maxind=max(maxind,curr);
        

        }
        return true;
    }
};