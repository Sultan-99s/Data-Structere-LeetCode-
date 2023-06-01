var maxDepth = function(root) {
    if(root === null)
        return 0;
    
    let l = maxDepth(root.left);
    let r = maxDepth(root.right);

    return Math.max(l, r)+1; 
};
