class Solution {
public:
    vector<int>ret;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        ret.push_back(root->val);
        inorder(root->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ret;
    }
};
