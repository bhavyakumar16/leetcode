class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int cnt=0;
        map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }

        for(auto it=mp.begin();it!=mp.end();it++){
            if(k==0){
                if(it->second>=2)cnt++;

            }
            else{
                int x = it->first;
                if(mp.find(x+k)!=mp.end())cnt++;
            }
        }
        return cnt;
        
    }
};