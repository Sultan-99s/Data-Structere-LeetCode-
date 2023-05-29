var preorderTraversal = function(root) {
    const tree = [];
    preorder(root);
    return tree;

    function preorder(root){
        if(root===null)
            return tree;
        tree.push(root.val);
        preorder(root.left);
        preorder(root.right);
    }
};
