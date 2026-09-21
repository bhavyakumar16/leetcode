class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int n = s.size();
        int m = p.size();
//         : s = "cbaebabacd", p = "abc"
// Output: [0,6]

        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
     
if(m>n)return {};
    for (char it : p) {
    freq1[it - 'a']++;
    }
    for(int i=0;i<m;i++){
        freq2[s[i]-'a']++;
    }
    vector<int>temp;
    
if (freq1 == freq2) {
    temp.push_back(0);
}
    int right = m ;
    while(right<n){
        int left = right-m;
        char outgoing = s[left];
        char incoming = s[right];
        freq2[outgoing-'a']--;
        freq2[incoming-'a']++;
        if(freq1==freq2){
            temp.push_back(left+1);
            
    };
        right++;
    }
    return temp;




 
        
    }
};