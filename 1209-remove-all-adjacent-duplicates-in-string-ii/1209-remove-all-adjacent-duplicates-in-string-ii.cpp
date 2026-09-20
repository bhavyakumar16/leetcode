class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;

for (int i = 0; i < s.size(); i++) {
    char ch = s[i];

    if (st.empty() || st.top().first != ch) {
        st.push({ch, 1});
    }
    else {
        st.top().second++;
    }

    if (!st.empty() && st.top().second == k) {
        st.pop();
    }
}
string ans = "";

while (!st.empty()) {
    char ch = st.top().first;
    int cnt = st.top().second;

    for (int i = 0; i < cnt; i++) {
        ans += ch;
    }

    st.pop();
}

reverse(ans.begin(), ans.end());

return ans;
        
    }
};