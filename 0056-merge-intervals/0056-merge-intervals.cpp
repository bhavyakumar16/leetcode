class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());

        int lastend = arr[0][1];
        int laststart=arr[0][0];

        for(int i=1;i<n;i++){
            if(arr[i][0]<=lastend){
                lastend = max(lastend,arr[i][1]);
            }
            else{
                ans.push_back({laststart,lastend});
                laststart=arr[i][0];
                lastend=arr[i][1];

            }

        }
        ans.push_back({laststart,lastend});
        return ans;
        
    }
};