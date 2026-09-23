class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0,r=0;
        int n = nums.size();
        int sum = 0;
        int ans = 0;
        map<int,int>mp;
         while(r<n){
            sum+=nums[r];
            mp[nums[r]]++;

            while(mp[nums[r]]>1){
                sum-=nums[l];
                mp[nums[l]]--;
                l++;
            }
            ans = max(ans,sum);
            r++;


         }
        return ans;
    }
};