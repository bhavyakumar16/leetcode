class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        vector<int>left(arr.size());
        vector<int>right(arr.size());
        int n = arr.size();
        vector<int>ans(n);
        left[0]=1;
        right[n-1]=1;
        
        for(int i=1;i<arr.size();i++){
          left[i]=left[i-1]*arr[i-1];}

        for(int i=n-2;i>=0;i--){
            right[i]=arr[i+1]*right[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
        return ans;
  


            


        
        
    }
};