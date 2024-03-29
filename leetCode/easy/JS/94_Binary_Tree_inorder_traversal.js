// I need to review my binary trees

var inorderTraversal = function(root) {
    const stack = [];
    const result = [];

    while (root || stack.length) {
        if (root) {
        stack.push(root);
        root = root.left;
        } else {
        root = stack.pop();
        result.push(root.val);
        root = root.right;
        }
        //console.log(stack, root, result)
    }

    return result;
};