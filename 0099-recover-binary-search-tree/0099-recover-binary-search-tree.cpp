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
vector<int>inorder;
int index=0;
void helper(TreeNode *root){
  

    if(root==NULL) return;
    helper(root->left);
    if(root->val!=inorder[index]){
        root->val=inorder[index];
    }
    index++;
    helper(root->right);
   
    

}
void gen_inorder(TreeNode *root){
    if(root==NULL)return;
    gen_inorder(root->left);
    inorder.push_back(root->val);
    gen_inorder(root->right);
}

    void recoverTree(TreeNode* root) {
         gen_inorder(root);
    
    sort(inorder.begin(),inorder.end());

        helper(root);
        
    }
};