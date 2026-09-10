class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        map<string, int> freq;

        for(int i = 0; i < words.size(); i++){
            freq[words[i]]++;
        }

        map<int, vector<string>, greater<int>> mp;

        for(auto it = freq.begin(); it != freq.end(); it++){
            mp[it->second].push_back(it->first);
        }

        for(auto it = mp.begin(); it != mp.end(); it++){

            for(int i = 0; i < it->second.size(); i++){

                if(k > 0){
                    ans.push_back(it->second[i]);
                    k--;
                }
            }
        }

        return ans;
    }
};