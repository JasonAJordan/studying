function invertBinaryTree(tree) {
    // Write your code here.
      if (tree){
          invertHelper(tree);
          invertBinaryTree(tree.right);
          invertBinaryTree(tree.left);
      }
      return tree; 
  }
  
  function invertHelper(tree){
      let temp = tree.right; 
      tree.right = tree.left; 
      tree.left = temp; 
  }