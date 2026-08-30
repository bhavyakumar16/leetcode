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

   
   int front=right+1;
  
   int back=n-left;
   
   int both=left+1+n-right;
  

   
   return min(front,min(back,both));

        
    }
};