// found on lc

var postorderTraversal = function(root) {
  let res = [];
  traverse(root);
  return res;
  
  function traverse(node) {
      if (!node) return;
      traverse(node.left);
      traverse(node.right);
      res.push(node.val);
  }
  // Time Complexity: O(n)
  // Space Complexity: O(n)
};