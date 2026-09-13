class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int sum=0;
        int cnt=0;
        
        map<int,int>mp;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                sum=nums1[i]+nums2[j];
                mp[sum]++;

            }
        }
        for(int i=0;i<nums3.size();i++){
            for(int j=0;j<nums4.size();j++){
                sum=nums3[i]+nums4[j];
                if(mp.find(-sum)!=mp.end()){
                    cnt+=mp[-sum];

                }
            }
        }
        return cnt;
        
    }
};