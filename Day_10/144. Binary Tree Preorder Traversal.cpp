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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> t;
        preOrder(root, t);
        return t;
        
    }
    void preOrder(TreeNode* root, vector<int>&p){
        if(root==NULL)
            return;
        p.push_back(root->val);
        preOrder(root->left, p);
        preOrder(root->right, p);
    }
};
