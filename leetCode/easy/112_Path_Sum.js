var hasPathSum = function(root, targetSum) {
    let sum = targetSum;
    if (root == undefined){
        return false 
    }
    if (!root.left && !root.right && root.val == sum){
        return true
    }
    sum -= root.val
    //console.log(root.left, root.right, sum)
    return (hasPathSum(root.left, sum) || hasPathSum(root.right, sum))
};