class Solution {
public:
    vector<int> n;

    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        n.push_back(root->val);
        inorder(root->right);
    }

    bool isValidBST(TreeNode* root) {
        inorder(root);

        for(int i=0; i<n.size()-1; i++){
            if(n[i] >= n[i+1])
                return false;
        }
        return true;
    }
};
