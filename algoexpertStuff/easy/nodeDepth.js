//First attempt got undefined so looked at solution I was very close, refacted on the bottom.  

function nodeDepths(root) {
    // Write your code here.
      let depthSum = 0;
      //let final = 0 turns out I didn't need this....

      const final = nodeDepthsHelper(root, depthSum)
      return final;
  }
  
  function nodeDepthsHelper(root, depthSum){
      if (!root) return 0; // I didn't put the zero here
      
      const left = nodeDepthsHelper(root.left, depthSum + 1)
      const right = nodeDepthsHelper(root.right, depthSum + 1)
      return depthSum + left + right 
  }
  
  // This is the class of the input binary tree.
  class BinaryTree {
    constructor(value) {
      this.value = value;
      this.left = null;
      this.right = null;
    }
  }

  function nodeDepthsSolution(root, depth=0) {
      if (root == null) return 0;
      return depth + nodeDepths(root.left, dpth + 1) + nodeDepths(root.right, depth + 1)
  }
  