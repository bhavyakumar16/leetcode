class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        // temp = {5,6,7}
        vector<int>temp;
        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        int ind =  n-1;   // 6 

        for(int i = n-k-1;i>=0;i--){
            nums[ind]=nums[i];
            ind--;
        }
        int tempind = temp.size()-1;
        for(int i= ind;i>=0;i--){
            nums[i]=temp[tempind];
            tempind--;
        }
        return;


        
       

        
        
        return ;
    
    }
};