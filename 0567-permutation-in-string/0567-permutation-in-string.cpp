class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        int m = s1.size();

        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
    if(m>n)return false;  

    for (char it : s1) {
    freq1[it - 'a']++;
    }
    for(int i=0;i<m;i++){
        freq2[s2[i]-'a']++;
    }
    if(freq1==freq2)return true;

    int right = m ;
    while(right<n){
        char outgoing = s2[right-m];
        char incoming = s2[right];
        freq2[outgoing-'a']--;
        freq2[incoming-'a']++;
        if(freq1==freq2)return true;
        right++;
    }
    return false;




        
    }
};