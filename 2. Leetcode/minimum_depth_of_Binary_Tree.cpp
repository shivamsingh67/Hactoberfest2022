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
    int minDepth(TreeNode* root) {
          ios_base::sync_with_stdio(false);
        if(!root)return 0;
        int l=minDepth(root->left);
        int r=minDepth(root->right);       
        if(!root->left || !root->right)
            return !root->right?l+1:r+1;
        root->left = NULL;
        root->right = NULL;
        return min(l,r)+1;
    }
};
