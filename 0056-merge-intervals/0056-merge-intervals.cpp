class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        int laststart = intervals[0][0];
        int lastend = intervals[0][1];

        for(int i = 1; i < n; i++) {

            if(intervals[i][0] <= lastend) {
                // overlap
                lastend = max(lastend, intervals[i][1]);
            }
            else {
                // no overlap
                ans.push_back({laststart, lastend});

                laststart = intervals[i][0];
                lastend = intervals[i][1];
            }
        }

        // add the last merged interval
        ans.push_back({laststart, lastend});

        return ans;
    }
};