/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        if(root == NULL) return NULL;
        if(root->val > val) return searchBST(root->left,val);
        if(root->val < val) return searchBST(root->right,val);
        return root;
        
    }
};
