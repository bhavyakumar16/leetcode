class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n =nums.size();

   int maxi,mini;
   int minind,maxind;
   maxi=*max_element(nums.begin(),nums.end());
   mini=*min_element(nums.begin(),nums.end());

   for(int i=0;i<nums.size();i++){
    if(nums[i]==maxi)  maxind=i;
    if(nums[i]==mini)  minind=i;

   }
   int left=min(maxind,minind);
   int right=max(maxind,minind);

   vector<int>ans;
   int front=right+1;
   ans.push_back(front);
   int back=n-left;
   ans.push_back(back);
   int both=left+1+n-right;
   ans.push_back(both);

   int fin=*min_element(ans.begin(),ans.end());
   return fin;

        
    }
};