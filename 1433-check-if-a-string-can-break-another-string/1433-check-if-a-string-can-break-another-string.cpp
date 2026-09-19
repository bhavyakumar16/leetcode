class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {

int c1=0;
int c2=0;
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());

for(int i=0;i<s1.size();i++){
    if(s1[i]<s2[i]){
        c2++;
       
    }
    else if(s1[i]>s2[i]){
        c1++;
    }
    
    
}
if(c1==0 || c2==0) return true;
return false;
        
    }
};