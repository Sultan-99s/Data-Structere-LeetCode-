var postorderTraversal = function(root) {
    const tree = [];
    postorder(root);
    return tree;

    function postorder(root){
        if(root === null)
            return tree;
        postorder(root.left);
        postorder(root.right);
        tree.push(root.val);
    }
};
