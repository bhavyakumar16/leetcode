class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        map<char,int>mp;
        for( char ch:s){
            mp[ch]++;
        }
        for(int i=0;i<order.size();i++){
            char ch = order[i];
            
            while(mp[ch]>0){
                ans+=ch;
                mp[ch]--;
            }
        }
       for(int i=0;i<s.size();i++){
        char ch = s[i];
        while(mp[ch]>0){
            ans+=ch;
            mp[ch]--;
        }
        
       }
       return ans;

        
    }
};