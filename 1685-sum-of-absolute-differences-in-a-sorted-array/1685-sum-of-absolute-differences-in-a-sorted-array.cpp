class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        int totalsum=0;
        vector<int>arr;
        // find total sum
       for(int i=0;i<n;i++){
            totalsum+=nums[i];
        }
        //initially no element on left so sum is 0
        int leftsum = 0;
        for(int i=0;i<n;i++){
            int rightsum = totalsum-leftsum-nums[i];
            int leftdiff = nums[i]*i -leftsum;
            int rightdiff = rightsum - (nums[i]*(n-1-i));
            int sum = leftdiff+rightdiff;
            arr.push_back(sum);
            leftsum+=nums[i];
           

        }
        return arr;
        
    }
};