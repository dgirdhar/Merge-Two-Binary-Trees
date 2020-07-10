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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode *node = nullptr;
        
        if (t1 != nullptr || t2 != nullptr) {
            node = new TreeNode((t1 != nullptr ? t1->val : 0) + (t2 != nullptr ? t2->val : 0));
                        
            node->left = mergeTrees(t1 != nullptr ? t1->left : nullptr, t2 != nullptr ? t2->left : nullptr);
            
            node->right = mergeTrees(t1 != nullptr ? t1->right : nullptr, t2 != nullptr ? t2->right : nullptr);
        }
        
        return node;
    }
};
