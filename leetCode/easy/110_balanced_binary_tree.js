// I really need to get down the dif between using !root vs !root.length

var isBalanced = function(root) {
    if (!root){
        return true
    }
    // - 1 would be false 
    if (depthCount(root) == -1) return false 
    return true
};

var depthCount = function(root){
    if (!root){
        return 0
    }
    let left = depthCount(root.left)
    let right = depthCount(root.right)
    if (left == -1 || right == - 1) return -1
    if (Math.abs(left - right) > 1) return -1
    return Math.max(left, right) + 1
}