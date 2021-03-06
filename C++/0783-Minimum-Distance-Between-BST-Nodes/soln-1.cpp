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
    int minDiffInBST(TreeNode* root) {
        vector<int> vals;
        Preorder(root, & vals);
        int ans = vals[1] - vals[0];
        for(int i = 1; i < (int) vals.size(); ++i) {
            ans = min(ans, vals[i] - vals[i - 1]);
        }
        return ans;
    }
private:
    void Preorder(TreeNode * node, vector<int> * vals) {
        if(node != nullptr) {
            Preorder(node->left, vals);
            vals->push_back(node->val);
            Preorder(node->right, vals);
        }
    }
};
