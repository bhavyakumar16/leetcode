/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode *built(vector<int>&arr,int &i,int &bound){
    if(i==arr.size() || arr[i]>bound) return NULL;

    int value = arr[i];
    i++;
    TreeNode *root = new TreeNode(value);
    root->left=built(arr,i,root->val);
    root->right=built(arr,i,bound);

    return root;
}

    

    TreeNode* bstFromPreorder(vector<int>& arr) {
        int i=0;
        int bound=INT_MAX;
        return built(arr,i,bound);


       
    }
};