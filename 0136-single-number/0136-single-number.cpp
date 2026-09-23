class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(int i:nums){
            if(mp[i]==1)return i;
        }
        return 0;
        
    }
};