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

    TreeNode* bst(vector<int>& preorder,
                  int preStart, int preEnd,
                  vector<int>& inorder,
                  int inStart, int inEnd,
                  map<int,int>& inmap) {

        // No elements
        if (preStart > preEnd || inStart > inEnd)
            return NULL;

        // First element of preorder is root
        TreeNode* root = new TreeNode(preorder[preStart]);

        // Find root in inorder
        int inRoot = inmap[root->val];

        // Number of elements in left subtree
        int numsLeft = inRoot - inStart;

        // Build left subtree
        root->left = bst(preorder,
                         preStart + 1,
                         preStart + numsLeft,
                         inorder,
                         inStart,
                         inRoot - 1,
                         inmap);

        // Build right subtree
        root->right = bst(preorder,
                          preStart + numsLeft + 1,
                          preEnd,
                          inorder,
                          inRoot + 1,
                          inEnd,
                          inmap);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {

        // Create inorder by sorting preorder
        vector<int> inorder(preorder);
        sort(inorder.begin(), inorder.end());

        // Store inorder positions
        map<int,int> inmap;

        for(int i = 0; i < inorder.size(); i++) {
            inmap[inorder[i]] = i;
        }

        // Build tree
        return bst(preorder,
                   0,
                   preorder.size() - 1,
                   inorder,
                   0,
                   inorder.size() - 1,
                   inmap);
    }
};