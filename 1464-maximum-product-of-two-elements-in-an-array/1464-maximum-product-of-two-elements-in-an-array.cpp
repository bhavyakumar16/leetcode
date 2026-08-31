class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();       
       sort(nums.begin(),nums.end());
       
       for(int i=0;i<nums.size();i++){
        if(i==n-1){
            return (nums[i]-1)*(nums[i-1]-1);
        }
       }
        return 0;
    }
};