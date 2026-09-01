class Solution {
public:

    void inorder(TreeNode* root, vector<int>& values) {

        if (root == NULL) return;

        inorder(root->left, values);

        values.push_back(root->val);

        inorder(root->right, values);
    }

    vector<int> findMode(TreeNode* root) {

        vector<int> values;
        inorder(root, values);

        map<int, int> mp;

        // Count frequency
        for (int i = 0; i < values.size(); i++) {
            mp[values[i]]++;
        }

        // Find maximum frequency
        int maxi = 0;

        for (auto it : mp) {
            maxi = max(maxi, it.second);
        }

        // Store all values having maximum frequency
        vector<int> ans;

        for (auto it : mp) {
            if (it.second == maxi) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};